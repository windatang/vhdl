-- contrl unit tb
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY ctb IS
END ctb;
 
ARCHITECTURE behavior OF ctb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT control
    PORT(
         address : IN  std_logic_vector(3 downto 0);
         text : OUT  std_logic_vector(1 downto 0);
         natt : OUT  std_logic_vector(3 downto 0);
         enA : OUT  std_logic;
         enB : OUT  std_logic;
         enC : OUT  std_logic;
         selMux : OUT  std_logic_vector(1 downto 0);
         selAlu : OUT  std_logic_vector(1 downto 0);
         fs : OUT  std_logic;
         KVAL : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal address : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal text : std_logic_vector(1 downto 0);
   signal natt : std_logic_vector(3 downto 0);
   signal enA : std_logic;
   signal enB : std_logic;
   signal enC : std_logic;
   signal selMux : std_logic_vector(1 downto 0);
   signal selAlu : std_logic_vector(1 downto 0);
   signal fs : std_logic;
   signal KVAL : std_logic_vector(3 downto 0);
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: control PORT MAP (
          address => address,
          text => text,
          natt => natt,
          enA => enA,
          enB => enB,
          enC => enC,
          selMux => selMux,
          selAlu => selAlu,
          fs => fs,
          KVAL => KVAL
        );

   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for clock_period;	
		address <= "0000";
		wait for clock_period;	
		address <= "0001";
		wait for clock_period;	
		address <= "0010";
		wait for clock_period;	
		address <= "0011";
		wait for clock_period;	
		address <= natt;
      wait for clock_period*10;
      wait;
   end process;

END;
