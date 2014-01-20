--Microcoded data processing 
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity system is
	Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
	Port ( SWITCHS  : in std_logic_vector(DBITS-1 downto 0);
			 Clock : in std_logic;
			 reset : in std_logic;
			 ADDRESS1 : out std_logic_vector(DBITS-1 downto 0);
			 LED   : out std_logic_vector(DBITS-1 downto 0));
end system;

architecture Behavioral of system is

  component MUX
    Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
      Port ( A     : in std_logic_vector(DBITS-1 downto 0);
             B     : in std_logic_vector(DBITS-1 downto 0);
				 KVAL     : in std_logic_vector(DBITS-1 downto 0);
				 sel     : in std_logic_vector(ABITS-1 downto 0);
				 SWITCHS  : in std_logic_vector(DBITS-1 downto 0);
				-- text   : out std_logic_vector(ABITS-1 downto 0);
             Y      : out std_logic_vector(DBITS-1 downto 0));
  end component;

	component  ALU
	 Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
      Port ( x     : in std_logic_vector(DBITS-1 downto 0);
             y     : in std_logic_vector(DBITS-1 downto 0);
             sel   : in std_logic_vector(ABITS-1 downto 0);
             z     : out std_logic_vector(DBITS-1 downto 0);
				 zflag    : out std_logic;
				 cflag    : out std_logic);

	  end component;
	  
	component  control
	 Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
      Port ( address     : in std_logic_vector(DBITS-1 downto 0);
				 text   : out std_logic_vector(ABITS-1 downto 0);
             natt   : out std_logic_vector(DBITS-1 downto 0);
				 enA    : out std_logic;
				 enB    : out std_logic;
				 enC    : out std_logic;
             selMux : out std_logic_vector(ABITS-1 downto 0);
             selAlu : out std_logic_vector(ABITS-1 downto 0);
				 fs    : out std_logic;
				 KVAL : out std_logic_vector(DBITS-1 downto 0));
   end component;

	 signal address  :  std_logic_vector(DBITS-1 downto 0) := "0000";
	 signal natt :  std_logic_vector(DBITS-1 downto 0) := "0000";
	 signal A  : std_logic_vector(DBITS-1 downto 0) := "0000";
	 signal B  : std_logic_vector(DBITS-1 downto 0) := "0000";
	 signal C  : std_logic_vector(DBITS-1 downto 0) := "0000";
	 signal zflag  : std_logic;
	 signal cflag  : std_logic;
	 signal zf  : std_logic;
	 signal cf  : std_logic;
	 --signal x       :  std_logic_vector(DBITS-1 downto 0);
    signal y       :  std_logic_vector(DBITS-1 downto 0);
    signal sel     :  std_logic_vector(ABITS-1 downto 0);
	 signal fs      :  std_logic;
	 signal z       :  std_logic_vector(DBITS-1 downto 0);
	 signal text    :  std_logic_vector(ABITS-1 downto 0);
    --signal natt    : out std_logic_vector(DBITS-1 downto 0);
	 signal enA    :  std_logic;
	 signal enB    :  std_logic;
	 signal enC    :  std_logic;
    signal selMux :  std_logic_vector(ABITS-1 downto 0);
    signal selAlu :  std_logic_vector(ABITS-1 downto 0);
	 signal KVAL   :  std_logic_vector(DBITS-1 downto 0);
			
begin

  Ucontrol : control Port map( address => address,
				 text => text,
             natt => natt,
				 enA => enA,
				 enB => enB,
				 enC => enC,
             selMux => selMux,
             selAlu => selAlu,
				 fs => fs,
				 KVAL => KVAL);
  Umux: MUX port map (A => A,
             B => B,
				 KVAL => KVAL,
				 SWITCHS  => SWITCHS,
				 sel => selMux,
				 Y => y    );
  Ualu: Alu port map (x => c,
             y    => y,
             sel  => selAlu,
             z    => z,
				 zflag => zf,
				 cflag => cf);

	
	process(enA, A, B , enB, enC, C,address,natt,reset,clock,zflag,cflag,zf,cf)
		begin
		if clock'event and clock = '1' then
			if(reset = '1') then
					address <= "0000";
					cflag <='0';
					zflag <='0';
			ELSE
				if(fs = '0') then
					zflag <= zflag;
					cflag <= cflag;
					if(text = "01" or (text = "11" and zflag = '1') or (text = "10" and cflag = '1')) then
						address <= natt;
					else
						address <= address + 1;
					end if;	
				elsif (fs = '1') then
					zflag <= zf;
					cflag <= cf;
					if(text = "01" or (text = "11" and zf = '1') or (text = "10" and cf = '1')) then
						address <= natt;
					else
						address <= address + 1;
					end if;	
				end if;
				
			if(enA = '1') then
				A <= z;
			end if;
			if(enB = '1') then
				B <= z;
			end if;
			if(enC = '1') then
				C <= z;
			end if;
			
		 end if;
		end if;
		 LED <= c;
  end process;
  
  ADDRESS1 <= address;

end Behavioral;

