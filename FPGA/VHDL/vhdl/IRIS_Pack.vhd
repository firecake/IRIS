--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package IRIS_Pack is

constant NB_PIXELS : integer := 3694;

    component RAM
    port(
         clka : IN  std_logic;
         wea : IN  std_logic_vector(0 downto 0);
         addra : IN  std_logic_vector(11 downto 0);
         dina : IN  std_logic_vector(15 downto 0);
         douta : OUT  std_logic_vector(15 downto 0);
         clkb : IN  std_logic;
         web : IN  std_logic_vector(0 downto 0);
         addrb : IN  std_logic_vector(11 downto 0);
         dinb : IN  std_logic_vector(15 downto 0);
         doutb : OUT  std_logic_vector(15 downto 0)
        );
    end component;
	
	component ItoA     
	Port ( I : in  STD_LOGIC_VECTOR (7 downto 0);
          A : out  STD_LOGIC_VECTOR (31 downto 0);
			 l : out integer);
	end component;

procedure FT_Send_Byte ( 	signal Data		: in std_logic_vector(7 downto 0); 
									signal FSCLK 	: in std_logic;
									signal FSDO 	: out std_logic								);
						
procedure FT_Read_Byte ( 	signal Data		: out std_logic_vector(7 downto 0); 
									signal Rdy     : out std_logic;
									signal FSCLK 	: in std_logic;
									signal FSDI 	: in std_logic									);						
end IRIS_Pack;

package body IRIS_Pack is

procedure FT_Send_Byte ( 	signal Data		: in std_logic_vector(7 downto 0); 
									signal FSCLK 	: in std_logic;
									signal FSDO 	: out std_logic									) is

variable iData : std_logic_vector(10 downto 0);

begin

   iData := '0' & Data & '0' & '1';
	
	for i in 10 downto 0 loop 
	  wait until FSCLK='0' and FSCLK'event;
	  FSDO <= iData(i);
	end loop ;
		
end  FT_Send_Byte ;

procedure FT_Read_Byte ( 	signal Data		: out std_logic_vector(7 downto 0); 
									signal Rdy     : out std_logic;
									signal FSCLK 	: in std_logic;
									signal FSDI 	: in std_logic									) is

variable iData : std_logic_vector(7 downto 0);

begin

   Rdy <= '0';
   while FSDI = '1' loop 
     wait until FSCLK='1' and FSCLK'event;
	end loop; 
	

	
   Rdy <= '1';
	for i in 7 downto 0 loop 
	  wait until FSCLK='1' and FSCLK'event;
	  iData(i) := FSDI;
	end loop ;
		
	Rdy <= '0';
	Data <= iData;
	wait until FSCLK='1' and FSCLK'event;
		
	wait until FSCLK='1' and FSCLK'event;
	
end  FT_Read_Byte ;

end IRIS_Pack;