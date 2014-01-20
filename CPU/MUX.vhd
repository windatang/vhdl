-- MUX unit
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity MUX is
		Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
      Port ( A     : in std_logic_vector(DBITS-1 downto 0);
             B     : in std_logic_vector(DBITS-1 downto 0);
				 KVAL     : in std_logic_vector(DBITS-1 downto 0);
				 sel     : in std_logic_vector(1 downto 0);
				 SWITCHS  : in std_logic_vector(DBITS-1 downto 0);
				 --text   : out std_logic_vector(ABITS-1 downto 0);
             Y      : out std_logic_vector(DBITS-1 downto 0));
end MUX;

architecture Behavioral of MUX is
	signal yout :  std_logic_vector(DBITS-1 downto 0);
begin
		with sel  SELECT
			 yout <=
			 A WHEN "00",
			 B WHEN "01",
			 KVAL WHEN "10",
			 SWITCHS  WHEN others;
		y <= yout;
end Behavioral;

