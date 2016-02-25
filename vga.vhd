----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:36:28 02/22/2016 
-- Design Name: 
-- Module Name:    vga - Behavioral 
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

use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity vga is
	PORT(
		clk	: IN STD_LOGIC;
		data : IN STD_LOGIC_VECTOR(8 downto 0);
		h_sync : OUT STD_LOGIC;
		v_sync : OUT STD_LOGIC;
		addr : OUT STD_LOGIC_VECTOR(15 downto 0);
		r0 : OUT STD_LOGIC;
		r1 : OUT STD_LOGIC;
		r2 : OUT STD_LOGIC;
		g0 : OUT STD_LOGIC;
		g1 : OUT STD_LOGIC;
		g2 : OUT STD_LOGIC;
		b0 : OUT STD_LOGIC;
		b1 : OUT STD_LOGIC;
		b2 : OUT STD_LOGIC
	);
end vga;

architecture Behavioral of vga is

	--counters
	SIGNAL h_counter : STD_LOGIC_VECTOR(9 downto 0) := "0000000000";
	SIGNAL v_counter : STD_LOGIC_VECTOR(9 downto 0) := "0000000000";
	
	--rgb
	SIGNAL rgb : STD_LOGIC_VECTOR(8 downto 0) := "000000000";
	SIGNAL color_en: STD_LOGIC := '0';
	--sync
	SIGNAL tmp_h_sync : STD_LOGIC := '1';
	SIGNAL tmp_v_sync : STD_LOGIC := '1';

begin

	--Handle  register transfers.
	clkd : PROCESS (clk)
	BEGIN
		--Handle Counters
		if (rising_edge(clk)) then
			---799
			if h_counter = x"31F" then
				h_counter <= ( others => '0');
			else
				h_counter <= h_counter+1;
			end if;
			
			--524
			if v_counter = x"20C" then
				v_counter <= ( others => '0');
			elsif h_counter = x"31F" then
				v_counter <= v_counter+1;
			else
				v_counter <= v_counter;
			end if;
		end if;
		
	END PROCESS clkd;
	
	---Handle color transfer
	color : PROCESS (clk)
	BEGIN
		if (rising_edge(clk)) then
			if color_en = '0' then
				rgb <= "000000000";
			else 
				rgb <= data;
			end if;
		end if;
	END PROCESS color;
	
	sync : PROCESS(clk)
	BEGIN
		if(rising_edge(clk)) then
			if (x"0" <= h_counter and h_counter < 96) then
				tmp_h_sync <= '0';
			else
				tmp_h_sync <= '1';
			end if;
			
			if x"0" <= v_counter and v_counter < 2 then
				tmp_v_sync <= '0';
			else
				tmp_v_sync <= '1';
			end if;
		end if;
	END PROCESS sync;
	
	addr <= (v_counter(7 downto 0) + (256-45)) & (h_counter(7 downto 0) + (256-159));
	--enable this the clock tick before data comes out. h_counter = 159
	color_en <= '1' WHEN ((159 <= h_counter) and (h_counter < 415) and (44 < v_counter) and (v_counter < 300)) else '0';
	
	h_sync <= tmp_h_sync;
	v_sync <= tmp_v_sync;
	
	r0 <= rgb(8);
	r1 <= rgb(7);
	r2 <= rgb(6);
	g0 <= rgb(5);
	g1 <= rgb(4);
	g2 <= rgb(3);
	b0 <= rgb(2);
	b1 <= rgb(1);
	b2 <= rgb(0);
	
	

end Behavioral;

