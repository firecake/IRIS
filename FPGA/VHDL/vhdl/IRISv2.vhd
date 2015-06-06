
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

use work.Iris_pack.all;

entity IRIS is

port(

    Clk 	: in std_logic;			-- 40MHz clock
    
    -- FT2232H interface
    
    FT2232_FSClk : out std_logic; 
    FT2232_FSDO  : in std_logic;
    FT2232_FSDI  : out std_logic;
    FT2232_FSCTS : in std_logic;
    
    -- ADC interface
    
    ADC_Sck     : out std_logic;
    ADC_Cnv     : out std_logic;
    ADC_Data    : in std_logic; 
    
    -- TCD1304 interface
    
    TCD_Clk     : out std_logic;
    TCD_ICG     : out std_logic;
    TCD_SH      : out std_logic
    
);

end entity;

architecture A1 of IRIS is

type FTState is ( S_Idle, S_Read_Byte, S_Decode, S_Read_RAM, S_Wait_CTS, S_Send_Word );
signal FT_current_state : FTstate := S_Idle;

type AState is ( S_Acq, S_Wait_ICG_To_SH, S_Wait_SH, S_Wait_ICG, S_Pix_Setup, S_Start_Conv, S_Wait_Conv, S_Clock_ADC, S_Get_ADC_Data, S_Complete );
signal Acq_current_state : Astate := S_Acq;

signal iClk : std_logic;

signal iADC_SCK : std_logic := '0';
signal iTCD_Clk : std_logic := '0';
signal iTCD_ICG : std_logic := '0';
signal iTCD_SH : std_logic := '0';

signal Data : std_logic_vector(15 downto 0)			:= ( others => '0' );

--  Counters

signal iClk_cpt 	: std_logic_vector(15 downto 0) 		:= ( others => '0' );
signal Tempo_cpt 	: integer 	:= 0;
signal Pix_cpt 	: integer 		:= 0;
signal ADC_Bit_cpt 	: integer 		:= 0;

-- RAM 

signal iFT2232_FSClk : std_logic;

signal RAMA_Wr : std_logic_vector(0 downto 0) 		:= (others => '0');
signal RAMA_Addr : std_logic_vector(11 downto 0) 	:= (others => '0');
signal RAMA_Din : std_logic_vector(31 downto 0) 	:= (others => '0');
signal RAMA_Dout : std_logic_vector(31 downto 0);

signal RAMB_Wr : std_logic_vector(0 downto 0) 		:= (others => '0');
signal RAMB_Addr : std_logic_vector(11 downto 0) 	:= (others => '0');
signal RAMB_Din : std_logic_vector(31 downto 0) 	:= (others => '0');
signal RAMB_Dout : std_logic_vector(31 downto 0);

-- Rx / Tx

signal Rx_Data0 : std_logic_vector(7 downto 0)      := ( others => '0' );
signal Rx_Bit_Cpt : std_logic_vector(2 downto 0)   := ( others => '0' );

signal Tx_Data : std_logic_vector(9 downto 0)      := ( others => '0' );

signal Word_Cpt : integer := 0;
signal Byte_Cpt : integer := 0;
signal Bit_cpt  : integer := 0;

-- Acq parameters

signal Int_cpt : std_logic_vector(15 downto 0)     := ( others => '0' );
signal Int_Time : std_logic_vector(7 downto 0)     := ( others => '0' );

signal Start_Acq : std_logic := '0';
signal Send_Packet : std_logic := '1';

signal iReset_n : std_logic;
signal Capture  : std_logic;

begin

--------------------------------------------------------------------------------------------------
--
-- Clock management
--
--------------------------------------------------------------------------------------------------

Clk_Man: Clk_Manager PORT MAP(
										CLKIN_IN => Clk,
										CLKIN_IBUFG_OUT => iFT2232_FSClk,
										Clk0_OUT => iClk,
										LOCKED_OUT => iReset_n
);
	
FT2232_FSClk <= not iFT2232_FSClk;

--
-- Command Format
--              -------------------------
--              |  7                  0 |
--              -------------------------
--                  Integration time

-- Data format :
--
--              ---------------------------------------------------------------------------
--              | STX | Data0 MSB | Data0 LSB | ... | Data 4095 MSB | Data 4095 LSB | CRC |
--              ---------------------------------------------------------------------------
--


FT2232H_manager: process( iReset_n, iClk )
begin

    if iReset_n = '0'
    then
        FT_current_state <= S_Idle; 
		  FT2232_FSDI <= '1';
		  
		  Int_Time <= conv_std_logic_vector(0,8);
		  Start_Acq <= '0';
		  
		  Rx_Data0 <= ( others => '1');
		  Rx_Bit_Cpt <= ( others => '0');
		  
		  Tx_Data <= ( others => '1');
		  Bit_cpt  <= 0;
		  Word_Cpt <= 0;
    else
        if iClk='1' and iClk'event 
        then
        
            case FT_current_state is
        
                when S_Idle => 
										  FT2232_FSDI <= '1';
										  RAMB_Addr <= ( others => '0' );
										  
                                if FT2232_FSDO = '0'
                                then Rx_Bit_Cpt <= conv_std_logic_vector(0,3);
										       FT_current_state <= S_Read_Byte;
                                else 
										       if FT2232_FSCTS = '1' and Send_Packet = '1'
                                     then Start_Acq <= '0';
												      Word_Cpt <= 0;
												      FT_current_state <= S_Read_RAM;
                                     end if;
                                end if;

					 ------------------------------------------------------------------------------
					 -- Receive Rx_Data
					 ------------------------------------------------------------------------------
					 
                when S_Read_Byte => 
										 
										  Rx_Data0(conv_integer(Rx_Bit_Cpt)) <= FT2232_FSDO;
										  Rx_Bit_Cpt <= Rx_Bit_Cpt + 1;
										  
										  if Rx_Bit_Cpt = 7
										  then FT_current_state <= S_Decode;
										  end if;
										  
					 when S_Decode =>
					                 Start_Acq <= '1';
										  Int_Time <= Rx_Data0(7 downto 0);
										  FT_current_state <= S_Idle;
					
                ------------------------------------------------------------------------------
					 -- Send Packet
					 ------------------------------------------------------------------------------					
					 
                when S_Read_RAM => FT2232_FSDI <= '1';
					                    Byte_Cpt <= 0;
											  Bit_cpt <= 0;
											  RAMB_Addr <= conv_std_logic_vector(Word_Cpt,12);  
                                   FT_current_state <= S_Wait_CTS;
											
					 when S_Wait_CTS => FT2232_FSDI <= '1';
					                    --Tx_Data  <= '0' & conv_std_logic_vector(Byte_Cpt,8) & '0' ;
											  Tx_Data <= '0' & RAMB_Dout(8*(Byte_Cpt+1)-1 downto 8*Byte_Cpt) & '0';
											  
                                   if FT2232_FSCTS = '1'
					                    then 	FT_current_state <= S_Send_Word;
											  end if;
											  
                when S_Send_Word => 
					                    FT2232_FSDI <= Tx_Data(Bit_cpt);
											  Bit_cpt <= Bit_cpt + 1;
											  
											  if Bit_cpt = 9
											  then 
											             
											       Bit_cpt <= 0;
													 Byte_Cpt <= Byte_Cpt + 1;
													 	
											       if Byte_Cpt = 3
													 then 
													    Byte_Cpt <= 0;
														 Word_Cpt <= Word_Cpt + 1;
                                           FT_current_state <= S_Read_RAM;
														 
														 if Word_Cpt = 4095
														 then Start_Acq <= '0';
																FT_current_state <= S_Idle;
														 end if;
														 
													  else FT_current_state <= S_Wait_CTS;
													end if;
											  end if;
											  
                when others =>  FT_current_state <= S_Idle;
                
            end case;
            
        end if;
    end if;
    
end process;

--------------------------------------------------------------------------------------------------
--
-- Acquisition
--
--------------------------------------------------------------------------------------------------

ADC_SCK <= iADC_SCK;

Acq:	process(iReset_n, iClk)
begin

	if iReset_n = '0'
	then
		
		Acq_current_state <= S_Acq;
		
		Int_cpt <= ( others => '0' );
		
	   iTCD_Clk <= '1';
	   iTCD_ICG <= '1';
		iTCD_SH <= '0';
		
		Tempo_cpt<= 0;
		Pix_cpt<= 0;
		ADC_Bit_cpt<= 0;
		
		iADC_SCK <= '0';
		ADC_Cnv <= '0';
		Data <= ( others => '0' );
		
		RAMA_Wr(0) <= '0';
		
		Send_Packet <= '0';
		capture <= '0';
		
	else
		if iClk='1' and iClk'event
		then

			iClk_cpt <= iClk_cpt + 1;
			if iClk_cpt = 9
			then 
					iClk_cpt<= ( others => '0' );
					iTCD_Clk <= not iTCD_Clk;
			end if;
									
			case Acq_current_state is
									
				when S_Acq =>  
									iTCD_ICG <= '0';
									Send_Packet <= '0';
				               Tempo_cpt<= 0;
									iClk_cpt<= ( others => '0' );
									
				               Acq_current_state <= S_Wait_ICG_To_SH;
									
				when S_Wait_ICG_To_SH => 
									
									if Start_Acq = '1' and capture ='0'
									then capture <= '1';
									end if;
									
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 19
									then 
											iTCD_SH <= '1';
											Tempo_cpt<= 0;
											Acq_current_state <= S_Wait_SH;
									end if;
									
				when S_Wait_SH =>
									
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 199
									then 
											iTCD_SH <= '0';
											Tempo_cpt<= 0;
											Acq_current_state <= S_Wait_ICG;
									end if;
						
				when S_Wait_ICG =>
				
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 199
									then 
											iTCD_ICG <= '1';
											Tempo_cpt<= 0;
											Pix_cpt<= 0;
											Acq_current_state <= S_Pix_Setup;
									end if;
									
				when S_Pix_Setup => 
				
									RAMA_Addr <= conv_std_logic_vector(Pix_cpt,12);
									
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 31
									then
									      ADC_Cnv <= '1';
											Acq_current_state <= S_Start_conv;
									end if;
									
				when S_Start_conv =>
				
									ADC_Cnv <= '0';
									Tempo_cpt <= 0;
									Acq_current_state <= S_Wait_Conv;
									
				when S_Wait_Conv =>
				
									Tempo_cpt <= Tempo_cpt + 1;
									
									if Tempo_cpt = 14
									then
									   Data(15) <= ADC_Data;
									   ADC_Bit_cpt <= 14;
										Acq_current_state <= S_Clock_ADC;
									end if;
			
				when S_Clock_ADC =>
									iADC_SCK <= not iADC_SCK;
									Acq_current_state <= S_Get_ADC_Data;
									
				when S_Get_ADC_Data =>
				               
									iADC_SCK <= not iADC_SCK;
									ADC_Bit_cpt <= ADC_Bit_cpt - 1;
									Data(ADC_Bit_cpt) <= ADC_Data;
				               Acq_current_state <= S_Clock_ADC; 
				          
									if ADC_Bit_cpt = 0
									then Tempo_cpt<= 0;
									
										  if Capture = '1' then
											  if Int_cpt = 0
											  then RAMA_Din  <= X"0000" & Data(15 downto 1) & ADC_Data;
											  else RAMA_Din  <= ( X"0000" & Data(15 downto 1) & ADC_Data ) + RAMA_Dout;
											  end if;
											end if;
										  
										  Acq_current_state <= S_Complete;
									end if;
									
				when S_Complete => 									
				
									RAMA_Wr(0)   <= '1';
									
									if Tempo_cpt = 1 
									then RAMA_Wr(0)  <= '0';
									end if;
									
				               Tempo_cpt <= Tempo_cpt + 1;
									
									if Tempo_cpt = 1
									then
									      Tempo_cpt<= 0;
											Pix_cpt <= Pix_cpt + 1;
											if Pix_cpt = NB_PIXELS
											then 
											     if Capture = '1'
												  then
														Int_cpt <= Int_cpt + 1;
														if Int_cpt = Int_Time
														then Int_cpt <= ( others => '0' );
														     Capture <= '0';
															  Send_Packet <= '1';
														end if;
												  end if;
												  
												  Acq_current_state <= S_Acq;
												  
											else Acq_current_state <= S_Pix_Setup;
											end if;
									end if;
				
				
				when others => Acq_current_state <= S_Acq;
			end case;
			
		end if;
	end if;
end process;

--
-- TCD1304 signals
--

TCD_Clk <= iTCD_Clk ;
TCD_ICG <= iTCD_ICG;
TCD_SH  <= iTCD_SH;

--
-- RAM
--

RAMB_Wr(0)  <= '0';
RAMB_Din <= ( others => '0' );

Memory: RAM PORT MAP (
          Clka => iClk,
          wea => RAMA_Wr,
          addra => RAMA_Addr,
          dina => RAMA_Din,
          douta => RAMA_Dout,
          Clkb => iClk,
          web => RAMB_Wr,
          addrb => RAMB_Addr,
          dinb => RAMB_Din,
          doutb => RAMB_Dout
        );
	 
end A1;
