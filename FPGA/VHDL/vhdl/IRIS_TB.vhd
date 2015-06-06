--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:50:16 04/30/2015
-- Design Name:   
-- Module Name:   C:/IRIS/IRIS/IRIS_TB.vhd
-- Project Name:  IRIS
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: IRIS
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

use std.textio.all;

use work.IRIS_Pack.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY IRIS_TB IS
END IRIS_TB;
 
ARCHITECTURE behavior OF IRIS_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT IRIS
    PORT(
         Clk : IN  std_logic;
         FT2232_FSClk : OUT  std_logic;
         FT2232_FSDO : IN  std_logic;
         FT2232_FSDI : OUT  std_logic;
         FT2232_FSCTS : IN  std_logic;
         ADC_Sck : OUT  std_logic;
         ADC_Cnv : OUT  std_logic;
         ADC_Data : IN  std_logic;
         TCD_Clk : out  std_logic;
         TCD_Icg : OUT  std_logic;
         TCD_Sh : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Clk : std_logic := '0';
   signal FT2232_FSDO : std_logic := '0';
   signal FT2232_FSCTS : std_logic := '0';
   signal ADC_Busy : std_logic := '0';
   signal ADC_Data : std_logic := '0';

 	--Outputs
   signal OSC_out : std_logic;
   signal FT2232_FSClk : std_logic;
   signal FT2232_FSDI : std_logic;
   signal ADC_Sck : std_logic;
   signal ADC_Cnv : std_logic;
   signal TCD_Clk : std_logic;
   signal TCD_Icg : std_logic;
   signal TCD_Sh : std_logic;

   -- FT2232 sim
	
	signal FT_Data : std_logic_vector(7 downto 0);
	signal FT_Data_MSB : std_logic_vector(7 downto 0);
	signal FT_Data_LSB : std_logic_vector(7 downto 0);
	signal FT_Data_Ready : std_logic;
	
	signal i : integer;
	
   -- Clock period definitions
   constant Clk_period : time := 25 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: IRIS PORT MAP (
          Clk => Clk,
          FT2232_FSClk => FT2232_FSClk,
          FT2232_FSDO => FT2232_FSDO,
          FT2232_FSDI => FT2232_FSDI,
          FT2232_FSCTS => FT2232_FSCTS,
          ADC_Sck => ADC_Sck,
          ADC_Cnv => ADC_Cnv,
          ADC_Data => ADC_Data,
          TCD_Clk => TCD_Clk,
          TCD_Icg => TCD_Icg,
          TCD_Sh => TCD_Sh
        );

   FT_Sim: process
	variable l : line;
	begin
		
		FT_Data_Ready <= '0';
		FT_Data <= X"00";
		FT2232_FSDO <= '1';
		FT2232_FSCTS <= '0';
	
	   wait for 1 ms;
		
	   FT_Data <= X"00";
		wait for 1 ns;
	   FT_Send_Byte ( FT_Data, FT2232_FSClk, FT2232_FSDO );
	
	   FT2232_FSCTS <= '1';
		FT_Data_Ready <= '0';
		for i in 0 to 4095 loop
			FT_Read_Byte(FT_Data_MSB, FT_Data_Ready, FT2232_FSClk, FT2232_FSDI );
			FT_Read_Byte(FT_Data_LSB, FT_Data_Ready, FT2232_FSClk, FT2232_FSDI );
			write(l, conv_integer(FT_Data_MSB)*256+conv_integer(FT_Data_LSB));
			writeline(output,l);
		end loop;
		
		wait for 4 ms;
		
	   FT_Data <= "01000000";
		wait for 1ns;
	   FT_Send_Byte ( FT_Data, FT2232_FSClk, FT2232_FSDO );
		
	   FT2232_FSCTS <= '1';
		FT_Data_Ready <= '0';
		for i in 0 to 4095 loop
			FT_Read_Byte(FT_Data_MSB, FT_Data_Ready, FT2232_FSClk, FT2232_FSDI );
			FT_Read_Byte(FT_Data_LSB, FT_Data_Ready, FT2232_FSClk, FT2232_FSDI );
			write(l, conv_integer(FT_Data_MSB)*256+conv_integer(FT_Data_LSB));
			writeline(output,l);
		end loop;
		
		wait;
		
	end process;

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;

   -- Stimulus process

   -- Clock process definitions
   ADC_process :process
	variable i : integer;
	variable Data : std_logic_vector(15 downto 0);
   begin
		
		ADC_Busy <= '0';
		ADC_Data <= '0';
		
		Data := ( others => '0' );
		
		loop
		
			wait until ADC_Cnv = '1' and ADC_Cnv'event;
			wait for 13 ns;
			
			ADC_Busy <= '1';
			
			wait for 322 ns; 		-- tconv max
			ADC_Busy <= '0';
			
			wait for 5 ns;  		-- tdsdobudyl
			ADC_Data <= Data(15);
			
			-- Data output
			
			for i in 14 downto 0 
			loop
				wait until ADC_SCK='1' and ADC_SCK'event;
				wait for 1 ns;    -- thsdo
				wait for 9.5 ns; 	-- tdsdo			
				ADC_Data <= Data(i);	
				
				wait for 39.5 ns;  -- 50 ns - thsdo - tdsdo
		   end loop;
			
			data := data + 1;
			
			if data = NB_PIXELS+1
			then data := ( others => '0' );
			end if;
			
		end loop;
		
   end process;

END;
