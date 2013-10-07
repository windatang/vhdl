----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:35:38 09/29/2013 
-- Design Name: 
-- Module Name:    multiplier - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplier is
    Port ( A,B : in  STD_LOGIC_VECTOR(3 downto 0);
           P : out  STD_LOGIC_VECTOR(7 downto 0));
end multiplier;


architecture Behavioral of multiplier is
	signal sum,bridge:STD_LOGIC_VECTOR(7 downto 0);
begin
	
	  behavior:process(a,b) is
	  variable a1,b1: Bit_vector(3 downto 0);
	  variable p2,bridge,sum: Bit_vector(7 downto 0);
	  variable flag,addBridge: bit;
	  variable carry: Bit_vector(2 downto 0);
	  begin
		a1:= to_bitvector(a);
		b1:= to_bitvector(b);
		p2:= (others=>'0');
		bridge := (others=>'0');
		
		for count in 0 to 3 loop
			if (a1(count)= '1') then
				bridge := "0000" & b1(3 downto 0);
				bridge := bridge Sll count;
				flag := '0';
				for index in 0 to 7 loop
					--addBridge :=  flag;
					carry :=(sum(index) & bridge(index) & flag); 
					if (carry = "110") or (carry = "011")  or (carry = "101") or (carry = "111") then
						addBridge := '1';
					else
						addBridge := '0';
					end if;
					sum(index) := flag xor sum(index)xor bridge(index);
					flag:=addBridge;
				end loop;	
			end if;
		end loop;
		P <= to_stdlogicvector(sum);

	end process;

end Behavioral;

