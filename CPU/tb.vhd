-- TestBench Template Microcoded data processing tb

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;

  ENTITY testbench IS
  END testbench;

  ARCHITECTURE behavior OF testbench IS 

          COMPONENT system
			 Generic (ABITS : integer := 2;
  	          DBITS : integer :=4);
          Port ( SWITCHS  : in std_logic_vector(DBITS-1 downto 0);
				 Clock : in std_logic;
				 reset : in std_logic;
				 ADDRESS1 : out std_logic_vector(DBITS-1 downto 0);
				 LED   : out std_logic_vector(DBITS-1 downto 0));
          END COMPONENT;

          SIGNAL Clock :  std_logic;
          SIGNAL reset :  std_logic;
			 SIGNAL SWITCHS :  std_logic_vector(3 downto 0);
			 SIGNAL LED :  std_logic_vector(3 downto 0);
			 SIGNAL ADDRESS1 : std_logic_vector(3 downto 0);
           -- Clock period definitions
  constant Clock_period : time := 10 ns;

  BEGIN
	Clock_process :process
   begin
		Clock <= '1';
		wait for Clock_period/2;
		Clock <= '0';
		wait for Clock_period/2;
   end process;
      uut: system PORT MAP(
                  SWITCHS => SWITCHS,
                  reset => reset,
						Clock => Clock,
						ADDRESS1 => ADDRESS1,
                  LED => LED
          );

     tb : PROCESS
     BEGIN
		 Reset<='1';
       wait for Clock_period/2; -- wait until global set/reset completes
		 Reset<='0';
		 SWITCHS <="0011";
       wait  for 1000ns;	
       wait; -- will wait forever
     END PROCESS tb;
  --  End Test Bench 

  END;
