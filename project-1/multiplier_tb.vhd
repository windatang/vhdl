--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:16:23 09/29/2013
-- Design Name:   
-- Module Name:   Z:/Users/winda/Documents/hartford/ECE534/PROJECT/project-1/multiplier_tb.vhd
-- Project Name:  project-1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multiplier
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY multiplier_tb IS
END multiplier_tb;
 
ARCHITECTURE behavior OF multiplier_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multiplier
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         P : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) ;
   signal B : std_logic_vector(3 downto 0) ;

 	--Outputs
   signal P : std_logic_vector(7 downto 0);
	SIGNAL x :  STD_LOGIC_VECTOR(3 downto 0);
	SIGNAL y :  STD_LOGIC_VECTOR(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   
 
BEGIN
-- a(0) <= x(0); 
--				a(1) <= x(1);
--				a(2) <= x(2);
--				a(3) <= x(3);
--				b(0) <= y(0); 
--				b(1) <= y(1);
--				b(2) <= y(2);
--				b(3) <= y(3);
A <=x;
B <=y;
	-- Instantiate the Unit Under Test (UUT)
   uut: multiplier PORT MAP(
				A => A,
				B => B,
				P => P

	 );
	--  Test Bench Statements
     tb : PROCESS
     BEGIN
		--X <= "0010"; Y <= "1000"; wait for 100 ns;
		X <= "0001"; Y <= "0000"; wait for 100 ns;
		--X <= "1111"; Y <= "1111"; wait for 100 ns;
		
     END PROCESS tb;
  --  End Test Bench 

  END;

