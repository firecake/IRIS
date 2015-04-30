

entity IRIS_v2 is

port(

	Reset_n : in std_logic;
	Clk 	: in std_logic;

    OSC_out : out std_logic;
    
    -- FT2232H interface
    
    FT2232_FSClk : out std_logic; 
    FT2232_FSDO  : in std_logic;
    FT2232_FSDI  : ou std_logic;
    FT2232_FSCTS : in std_logic;
    
    -- ADC interface
    
    ADC_Sck     : out std_logic;
    ADC_Cnv     : out std_logic;
    ADC_Busy    : in std_logic;
    ADC_Data    : in std_logic; 
    
    -- TCD1304 interface
    
    TCD_Clk     : out std_logic;
    TCD_Icg     : out std_logic;
    TCD_Sh      : out std_logic;
    
)

end entity;

architecture A1 of IRIS_v2
begin

-- Clock 2MHz, output rate 500KHz
--
-- Modes : Idle / acq
-- Commandes :
--              Change_mode 
--              OVS : 1, 2 ou 4
--              Exp : 0.000002 * 3694 * n s soit entre 0,007388 et 0,5 s 
--
-- Format des commandes ( octets ) :
--
--              -----------------------------------
--              | STX |     Param  | Param  | EOT |
--              -----------------------------------
--                    | Mode | OVS |   Exp   |
--                    ------------------------
--

--
-- Buffer de sortie : 4095 * 2
--
-- Format des données :
--
--              ---------------------------------------------------------------------------
--              | STX | Data0 MSB | Data0 LSB | ... | Data 4095 MSB | Data 4095 LSB | EOT |
--              ---------------------------------------------------------------------------
--


Read data from FIFO and write them to FT2232H


Si il y a des données à envoyer on en envoie une puis on vérifie FSDI pour voir si il n'y a rien à lire. Si il y a a lire, on lit un mot et on recommence. Au changement de mode, on termine d'envoyer le buffer en cours et on s'arrête.

Liaison à 50MHz => 6Mo/s  le système délivre au max : 500KHz * 16 = 1Mo/s

FT2232_Clk <= Clk;

FT2232H_manager: process( Reset_n, Clk)
begin

    if Reset_n = '0'
    then
        current_state <= S_Idle;
        
    else
        if Clk='0' and Clk'event 
        then
        
            case current state is
        
                when S_Idle => 
                                if FT2232_FSDO = '0'
                                then current_state <= S_Read_Byte;
                                else if FIFO_Empty = '0' and FSCTS ='1'
                                     then current_state <= S_Write_Byte;
                                     end if;
                                end if;
            
                when S_Read_Byte => 
                
                when S_Write_Byte => 
                
                when others =>  current_state <= S_Idle;
                
            end case;
            
        end if;
    end if;
    
end process;

--

Read data from ADC buffer and write them to FIFO

--

Read data from ADC and write them to buffers


end A1;
