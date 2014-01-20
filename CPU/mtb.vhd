-- Mux unit tb
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY mtb IS
END mtb;
 
ARCHITECTURE behavior OF mtb IS 
    COMPONENT MUX
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         KVAL : IN  std_logic_vector(3 downto 0);
         sel : IN  std_logic_vector(1 downto 0);
         SWITCHS : IN  std_logic_vector(3 downto 0);
			Y : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
  
   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal KVAL : std_logic_vector(3 downto 0) := (others => '0');
   signal sel : std_logic_vector(1 downto 0) := (others => '0');
   signal SWITCHS : std_logic_vector(3 downto 0) := (others => '0');

   signal Y : std_logic_vector(3 downto 0);
BEGIN
	uut: MUX PORT MAP (
          A => A,
          B => B,
          KVAL => KVAL,
          sel => sel,
          SWITCHS => SWITCHS,
          Y => Y
        );
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 10 ns;	
		 A <= "0001";
       B <= "0010";
       KVAL <= "0100";
       sel <= "00";
       SWITCHS <="1000";
		wait for 10 ns;
		  sel <= "01";
		wait for 10 ns;
		  sel <= "10";
		wait for 10 ns;
		  sel <= "11";   
      wait;
   end process;

END;
