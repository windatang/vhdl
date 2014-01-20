-- ALU unit tb
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY tba IS
END tba;
 
ARCHITECTURE behavior OF tba IS 
    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT ALU
    PORT(
         x : IN  std_logic_vector(3 downto 0);
         y : IN  std_logic_vector(3 downto 0);
         sel : IN  std_logic_vector(1 downto 0);
         z : OUT  std_logic_vector(3 downto 0);
         zflag : OUT  std_logic;
         cflag : OUT  std_logic
        );
    END COMPONENT;

   --Inputs
   signal x : std_logic_vector(3 downto 0) := (others => '0');
   signal y : std_logic_vector(3 downto 0) := (others => '0');
   signal sel : std_logic_vector(1 downto 0) := (others => '0');
 	--Outputs
   signal z : std_logic_vector(3 downto 0);
   signal zflag : std_logic;
   signal cflag : std_logic;
	constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          x => x,
          y => y,
          sel => sel,
          z => z,
          zflag => zflag,
          cflag => cflag
        );
   stim_proc: process
   begin		
      wait for 2 ns;	
		wait for clock_period/2;	
			x <= "1111";
         y <= "1011";
         sel  <= "00";
		wait for clock_period/2;	
			x <= "0001";
			y <= "0011";
		   sel  <= "01";
		wait for clock_period;	
			x <= "0001";
			x <= "0001";
		   sel  <= "10";
		wait for clock_period;	
		   sel  <= "11";
      wait;
   end process;

END;
