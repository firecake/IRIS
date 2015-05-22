
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

use work.Iris_pack.all;

entity IRIS is

port(

    Reset_n : in std_logic;
    Clk 	: in std_logic;			-- 40MHz clock
    
    -- FT2232H interface
    
    FT2232_FSClk : out std_logic; 
    FT2232_FSDO  : in std_logic;
    FT2232_FSDI  : out std_logic;
    FT2232_FSCTS : in std_logic;
    
    -- ADC interface
    
    ADC_Sck     : out std_logic;
    ADC_Cnv     : out std_logic;
    ADC_Busy    : in std_logic;
    ADC_Data    : in std_logic; 
    
    -- TCD1304 interface
    
    TCD_Clk     : out std_logic;
    TCD_Icg     : out std_logic;
    TCD_Sh      : out std_logic
    
);

end entity;

architecture A1 of IRIS is

type FTState is ( S_Idle, S_Read_Byte0, S_Wait0, S_Read_Byte1, S_Decode, S_Read_RAM1, S_Send_Byte1, S_Wait_CTS1, S_Read_RAM2, S_Send_Byte2, S_Wait_CTS2 );
signal FT_current_state : FTstate := S_Idle;

type AState is ( S_Idle, S_Acq, S_Wait_ICG_To_SH, S_Wait_SH, S_Wait_ICG, S_Pix_Setup, S_Start_Conv, S_Wait_Conv, S_Clock_ADC, S_Get_ADC_Data, S_Complete );
signal Acq_current_state : Astate := S_Idle;

constant ASCII_0 : integer := 48;

signal iADC_SCK : std_logic := '0';
signal iTCD_Clk : std_logic := '0';

signal Data : std_logic_vector(15 downto 0)			:= ( others => '0' );

--  Counters

signal Clk_cpt : std_logic_vector(15 downto 0) 		:= ( others => '0' );
signal Tempo_cpt : std_logic_vector(15 downto 0) 	:= ( others => '0' );
signal Pix_cpt : std_logic_vector(15 downto 0) 		:= ( others => '0' );
signal Bit_cpt : std_logic_vector(3 downto 0) 		:= ( others => '0' );

-- RAM 

signal RAMA_Wr : std_logic_vector(0 downto 0) 		:= (others => '0');
signal RAMA_Addr : std_logic_vector(11 downto 0) 	:= (others => '0');
signal RAMA_Din : std_logic_vector(15 downto 0) 	:= (others => '0');
signal RAMA_Dout : std_logic_vector(15 downto 0);

signal RAMB_Wr : std_logic_vector(0 downto 0) 		:= (others => '0');
signal RAMB_Addr : std_logic_vector(11 downto 0) 	:= (others => '0');
signal RAMB_Din : std_logic_vector(15 downto 0) 	:= (others => '0');
signal RAMB_Dout : std_logic_vector(15 downto 0);

-- itoa

signal ASCII_MSB_Data : std_logic_vector(31 downto 0);
signal ASCII_MSB_Length : integer range 0 to 3;

signal ASCII_LSB_Data : std_logic_vector(31 downto 0); 
signal ASCII_LSB_Length : integer range 0 to 3;

-- Rx / Tx

signal Rx_Data0 : std_logic_vector(7 downto 0)      := ( others => '0' );
signal Rx_Data1 : std_logic_vector(7 downto 0)      := ( others => '0' );
signal Rx_Bit_Cpt : std_logic_vector(2 downto 0)   := ( others => '0' );

signal Tx_Data : std_logic_vector(9 downto 0)      := ( others => '0' );
signal Tx_Bit_Cpt : std_logic_vector(3 downto 0)   := ( others => '0' );
signal Tx_Byte_Cpt : std_logic_vector(11 downto 0) := ( others => '0' );

-- Acq parameters

signal Int_cpt : std_logic_vector(15 downto 0)     := ( others => '0' );
signal Int_Time : std_logic_vector(7 downto 0)     := ( others => '0' );

signal Start_Acq : std_logic := '0';
signal Send_Packet : std_logic := '1';

begin

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

FT2232_FSClk <= Clk;

FT2232H_manager: process( Reset_n, Clk )
begin

    if Reset_n = '0'
    then
        FT_current_state <= S_Idle; 
		  FT2232_FSDI <= '1';
		  
		  Int_Time <= conv_std_logic_vector(0,8);
		  Start_Acq <= '0';
		  
		  Rx_Data0 <= ( others => '0');
		  Rx_Data1 <= ( others => '0');
		  Rx_Bit_Cpt <= ( others => '0');
		  
		  Tx_Data <= ( others => '1');
		  Tx_Bit_Cpt <= ( others => '0');
		  Tx_Byte_Cpt <= ( others => '0');
    else
        if Clk='1' and Clk'event 
        then
        
            case FT_current_state is
        
                when S_Idle => 
					                 Start_Acq <= '0';
										  
                                if FT2232_FSDO = '0'
                                then Rx_Bit_Cpt <= conv_std_logic_vector(7,3);
										       FT_current_state <= S_Read_Byte0;
                                else 
										       if FT2232_FSCTS = '1' and Send_Packet = '1'
                                     then Tx_Bit_Cpt <= ( others => '0' );
												      Tx_Byte_Cpt <= ( others => '0' );
												      FT_current_state <= S_Read_RAM1;
                                     end if;
                                end if;

					 ------------------------------------------------------------------------------
					 -- Receive Rx_Data
					 ------------------------------------------------------------------------------
                when S_Read_Byte0 => 
										
										  Rx_Data0(conv_integer(Rx_Bit_Cpt)) <= FT2232_FSDO;
										  Rx_Bit_Cpt <= Rx_Bit_Cpt - 1;
										  if Rx_Bit_Cpt = 0
										  then FT_current_state <= S_Wait0;
										  end if;
         
                when S_Wait0 => Rx_Bit_Cpt <= conv_std_logic_vector(7,3);
										  if FT2232_FSDO = '0'
					                 then FT_current_state <= S_Read_Byte1;
										  end if;
	
                when S_Read_Byte1 => 
										
										  Rx_Data1(conv_integer(Rx_Bit_Cpt)) <= FT2232_FSDO;
										  Rx_Bit_Cpt <= Rx_Bit_Cpt - 1;
										  if Rx_Bit_Cpt = 0
										  then FT_current_state <= S_Decode;
										  end if;
										  
					 when S_Decode =>
					                 Start_Acq <= '1';
										  Int_Time <= conv_integer(( Rx_Data0(7 downto 0) - ASCII_0 )) * 10 + ( Rx_Data1(7 downto 0) - ASCII_0 );
										  FT_current_state <= S_Idle;
					
                ------------------------------------------------------------------------------
					 -- Send Packet
					 ------------------------------------------------------------------------------					
					 
                when S_Read_RAM1 => RAMB_Addr <= Tx_Byte_Cpt;
					                    Tx_Data  <= '0' & ASCII_MSB_Data(31 downto 24) & '0';
											  Tx_Bit_cpt <= conv_std_logic_vector(9,4);
											  
											  FT_current_state <= S_Send_Byte1;
					
                when S_Send_Byte1 => 
					                    FT2232_FSDI <= Tx_Data(conv_integer(Tx_Bit_cpt));
											  Tx_Bit_cpt <= Tx_Bit_cpt - 1;	
											  
											  if Tx_Bit_cpt = 0
											  then FT_current_state <= S_Wait_CTS1;
											  end if;
											  
					 when S_Wait_CTS1 => 
					                    FT2232_FSDI <= '1';
                  					  if FT2232_FSCTS = '1'
					                    then FT_current_state <= S_Read_RAM2;
											  end if;
					 
                when S_Read_RAM2 => 
					                    Tx_Data  <= '0' & ASCII_MSB_Data(23 downto 16) & '0';
											  Tx_Bit_cpt <= conv_std_logic_vector(9,4);
											  
											  FT_current_state <= S_Send_Byte2;
					
                when S_Send_Byte2 => 
					                    FT2232_FSDI <= Tx_Data(conv_integer(Tx_Bit_cpt));
											  Tx_Bit_cpt <= Tx_Bit_cpt - 1;	
											  
											  if Tx_Bit_cpt = 0
											  then Tx_Byte_Cpt <= Tx_Byte_Cpt + 1;
											       if Tx_Byte_Cpt = 4095
													 then FT2232_FSDI <= '1';
													      FT_current_state <= S_Idle;
													 else FT_current_state <= S_Wait_CTS2;
													 end if;
											  end if;
											  
					 when S_Wait_CTS2 => FT2232_FSDI <= '1';
					                    if FT2232_FSCTS = '1'
					                    then FT_current_state <= S_Read_RAM1;
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

TCD_Clk <= iTCD_Clk;
ADC_SCK <= iADC_SCK;

Acq:	process(Reset_n, Clk)
begin

	if Reset_n = '0'
	then
		
		Acq_current_state <= S_Idle;
		
		Int_cpt <= ( others => '0' );
		
	   iTCD_Clk <= '1';
	   TCD_Icg <= '1';
		TCD_Sh <= '0';
		
		Tempo_cpt<= ( others => '0' );
		Pix_cpt<= ( others => '0' );
		Bit_cpt<= ( others => '0' );
		
		iADC_SCK <= '0';
		ADC_Cnv <= '0';
		Data <= ( others => '0' );
		
		RAMA_Wr(0) <= '0';
		
		Send_Packet <= '0';
		
	else
		if Clk='1' and Clk'event
		then

			Clk_cpt <= Clk_cpt + 1;
			if Clk_cpt = 9
			then 
					Clk_cpt<= ( others => '0' );
					iTCD_Clk <= not iTCD_Clk;
			end if;
									
			case Acq_current_state is
			
			   when S_Idle => Send_Packet <= '0';
									if Start_Acq = '1'
				               then Acq_current_state <= S_Acq;
									end if;
				when S_Acq =>  
									TCD_ICG <= '0';
				               Tempo_cpt<= ( others => '0' );
									Clk_cpt<= ( others => '0' );
				               Acq_current_state <= S_Wait_ICG_To_SH;
									
				when S_Wait_ICG_To_SH => 
									
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 19
									then 
											TCD_SH <= '1';
											Tempo_cpt<= ( others => '0' );
											Acq_current_state <= S_Wait_SH;
									end if;
									
				when S_Wait_SH =>
									
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 199
									then 
											TCD_SH <= '0';
											Tempo_cpt<= ( others => '0' );
											Acq_current_state <= S_Wait_ICG;
									end if;
						
				when S_Wait_ICG =>
				
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 199
									then 
											TCD_ICG <= '1';
											Tempo_cpt<= ( others => '0' );
											Pix_cpt<= ( others => '0' );
											Acq_current_state <= S_Pix_Setup;
									end if;
									
				when S_Pix_Setup => 
				
									RAMA_Addr <= Pix_cpt(11 downto 0);
									
									Tempo_cpt <= Tempo_cpt + 1;
									if Tempo_cpt = 39
									then
									      ADC_Cnv <= '1';
											Acq_current_state <= S_Start_conv;
									end if;
									
				when S_Start_conv =>
				
									ADC_Cnv <= '0';
									Tempo_cpt <= ( others => '0' );
									Acq_current_state <= S_Wait_Conv;
									
				when S_Wait_Conv =>
				
									Tempo_cpt <= Tempo_cpt + 1;
									
									if Tempo_cpt = 14
									then
									   Data(15) <= ADC_Data;
									   Bit_cpt <= conv_std_logic_vector(14,4);
										Acq_current_state <= S_Clock_ADC;
									end if;
			
				when S_Clock_ADC =>
									iADC_SCK <= not iADC_SCK;
									Acq_current_state <= S_Get_ADC_Data;
									
				when S_Get_ADC_Data =>
				               
									iADC_SCK <= not iADC_SCK;
									Bit_cpt <= Bit_cpt - 1;
									Data(conv_integer(Bit_cpt)) <= ADC_Data;
				               Acq_current_state <= S_Clock_ADC; 
				          
									if Bit_cpt = 0
									then Tempo_cpt<= ( others => '0' );
										  
										  if Int_cpt = 0
										  then RAMA_Din  <= Data(15 downto 1) & ADC_Data;
										  else RAMA_Din  <= ( Data(15 downto 1) & ADC_Data ) + RAMA_Dout;
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
									      Tempo_cpt<= ( others => '0' );
											Pix_cpt <= Pix_cpt + 1;
											if Pix_cpt = NB_PIXELS
											then Pix_cpt <= ( others => '0' );
											     Int_cpt <= Int_cpt + 1;
											     if Int_cpt = Int_Time
												  then Int_cpt <= ( others => '0' );
												       Send_Packet <= '1';
												       Acq_current_state <= S_Idle;
												  else Acq_current_state <= S_Acq;
												  end if;
											else Acq_current_state <= S_Pix_Setup;
											end if;
									end if;
				
				
				when others => Acq_current_state <= S_Idle;
			end case;
			
		end if;
	end if;
end process;

--
-- RAM
--

RAMB_Wr(0)  <= '0';
RAMB_Din <= ( others => '0' );

Memory: RAM PORT MAP (
          clka => Clk,
          wea => RAMA_Wr,
          addra => RAMA_Addr,
          dina => RAMA_Din,
          douta => RAMA_Dout,
          clkb => Clk,
          web => RAMB_Wr,
          addrb => RAMB_Addr,
          dinb => RAMB_Din,
          doutb => RAMB_Dout
        );
		  
--
-- Integer to ASCII converter
--

MSBItoa: ItoA port map(RAMB_Dout(15 downto 8), ASCII_MSB_Data, ASCII_MSB_Length);
LSBItoa: ItoA port map(RAMB_Dout( 7 downto 0), ASCII_LSB_Data, ASCII_LSB_Length);

end A1;
