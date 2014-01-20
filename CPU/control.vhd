library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity control is
	 Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
      Port ( address     : in std_logic_vector(DBITS-1 downto 0);
             --SW     : in std_logic_vector(DBITS-1 downto 0);
				 text   : out std_logic_vector(ABITS-1 downto 0);
             natt   : out std_logic_vector(DBITS-1 downto 0);
				 enA    : out std_logic;
				 enB    : out std_logic;
				 enC    : out std_logic;
             selMux : out std_logic_vector(ABITS-1 downto 0);
             selAlu : out std_logic_vector(ABITS-1 downto 0);
				 fs    : out std_logic;
				 KVAL : out std_logic_vector(DBITS-1 downto 0)
);
end control;

architecture Behavioral of control is
	subtype MREC is std_logic_vector(17 downto 0);
	type MSTORE is array (natural range <>)of MREC;
   constant MROM : MSTORE := (
--	"000000101101000001",
--	"110001000111110000",
--	"100000101000010000",
--	"010001000000000000");

--	"00"&"0000"&"001"&"10"&"10"&"0"&"0001",
--	"00"&"0000"&"001"&"10"&"00"&"0"&"0001",
--	"11"&"0000"&"000"&"10"&"01"&"1"&"0100",
--	"01"&"0001"&"000"&"00"&"00"&"0"&"0000");

	"00"&"0000"&"001"&"10"&"10"&"0"&"1111",
	"00"&"0000"&"110"&"11"&"10"&"0"&"0000",
	"11"&"0000"&"011"&"00"&"01"&"0"&"0000",
	"00"&"0000"&"001"&"00"&"10"&"0"&"0000",
	"00"&"0000"&"001"&"10"&"00"&"0"&"0001",
	"10"&"0100"&"000"&"01"&"01"&"1"&"0000",
	"01"&"0000"&"000"&"00"&"00"&"0"&"0000");
	signal Ctl : std_logic_vector(17 downto 0); 
	signal nat : std_logic_vector(3 downto 0); 
begin
	Ctl <= MROM(CONV_INTEGER(address));
	text <= Ctl(17 downto 16);
	enA <= Ctl(11);
	enB <= Ctl(10);
	enC <= Ctl(9);
	selMux <= Ctl(8 downto 7);
	selAlu <= Ctl(6 downto 5);
	fs <= Ctl(4);
	KVAL <= Ctl(3 downto 0);
	--nat <= Ctl(17 downto 16);
	natt <= Ctl(15 downto 12);
end Behavioral;

