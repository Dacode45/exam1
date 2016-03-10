library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
 use IEEE.numeric_std.all;

entity ledModule is
	Port(
		clk	: IN STD_LOGIC;
		blink : in std_logic_vector(0 downto 0);
		led : out std_logic
	);
end ledModule;

architecture Behavioral of ledModule is
	
begin
clkd : process(clk)
	begin
		--off when blink is low
		if(rising_edge(clk)) then
			if (blink = "0") then
				led <= '1';
			else
				led <= '0';
			end if;
		end if;
	end process clkd;

end Behavioral;
