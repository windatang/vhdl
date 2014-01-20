library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity ALU is
	 Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
      Port ( x     : in std_logic_vector(DBITS-1 downto 0);
             y     : in std_logic_vector(DBITS-1 downto 0);
             sel   : in std_logic_vector(1 downto 0);
				 z     : out std_logic_vector(DBITS-1 downto 0);
				 zflag    : out std_logic;
				 cflag    : out std_logic);
end ALU;

architecture Behavioral of ALU is
   signal bridgex,bridgey : std_logic_vector(4 downto 0);
	signal z1 : std_logic_vector(4 downto 0);
begin
      bridgex <= ext(x,5);
		bridgey <= ext(y,5);
	   with sel  SELECT
			 z1 <=
			 bridgex + bridgey WHEN "00",
			 bridgex - bridgey WHEN "01",
			 bridgey WHEN "10",
			 bridgex and bridgey  WHEN others;
			 
			 
		cflag <= z1(4);
		with z1  SELECT
			zflag <='1' WHEN "00000",
					  '0' WHEN others;
		z <= z1(3 downto 0);
	
end Behavioral;

