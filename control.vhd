
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity control is
	PORT(
		clk	: IN STD_LOGIC;
		rxf_l : IN STD_LOGIC;
		txe_l : IN STD_LOGIC;
		oe_l : OUT STD_LOGIC;
		rd_l : OUT STD_LOGIC;
		addr : OUT STD_LOGIC_VECTOR(15 downto 0);
		en_mem : OUT STD_LOGIC_VECTOR(0 downto 0);
		d_in : IN STD_LOGIC_VECTOR(7 downto 0);
		reset_ext : IN STD_LOGIC;
		d_out : OUT STD_LOGIC_VECTOR(8 downto 0)
	);
end control;

architecture Behavioral of control is
	TYPE states IS (s0, s1, s2, s3, s4, s5, s6, s7);
	
	SIGNAL state: states := s0;
	SIGNAL nxt_state : states := s0;
	
	--Internal Signals
	--Resgister
	SIGNAL en_lower : STD_LOGIC := '0';
	SIGNAL d_lower : STD_LOGIC_VECTOR(7 downto 0):= (others => '0');
	SIGNAL en_upper : STD_LOGIC := '0';
	SIGNAL d_upper : STD_LOGIC_VECTOR(7 downto 0):= (others => '0');
	
	SIGNAL concat : STD_LOGIC_VECTOR(15 downto 0):= (others => '0');
	
	SIGNAL crap : STD_LOGIC := '0'; -- all ones
	SIGNAL byte_counter : STD_LOGIC := '0'; --what byte are you on
	SIGNAL nxt_byte_counter : STD_LOGIC := '0'; --what byte are you on
	SIGNAL mem_set : STD_LOGIC := '0'; --memory should be set the next tick
	SIGNAL mem_full : STD_LOGIC := '0';

	--Register
	SIGNAL addr_counter : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
	
begin


	clkd : PROCESS(clk)
	BEGIN
		--Handle state transition
		if (rising_edge(clk)) then
			if(reset_ext = '1' or crap='1') then
				state <= s0;
			else
				state <= nxt_state;
			end if;
		end if;
	END PROCESS clkd;
	
	addr_gen : PROCESS(clk)
	BEGIN
		if (rising_edge(clk)) then
				if (state = s0) then
					addr_counter <= (others => '0');
				elsif (state = s7) then
						addr_counter <= addr_counter + 1;
				else
					addr_counter <= addr_counter;
				end if;
		end if;
	END PROCESS addr_gen;
	
	data_in : PROCESS(clk)
	BEGIN
		-- Handle register writes
		if (rising_edge(clk)) then
		
			if crap = '1' then
				d_lower <= (others => '0');
				d_upper <= (others => '0');
			else
				
					if(en_lower = '1') then
						d_lower <= d_in; 
					end if;
			
					if(en_upper = '1') then
						d_upper <= d_lower;
					end if;
				
			end if;
		end if;
				
	END PROCESS data_in;
	
	
	state_trans: PROCESS(rxf_l, state)
	BEGIN
			nxt_state <= state;
			CASE state IS
				when s0 => 	nxt_state <= s1;
								
				when s1 => if rxf_l = '1' then
									nxt_state <= s1;
								else 
									nxt_state <= s2;
								end if;
				when s2 => nxt_state <= s3;
				when s3 => nxt_state <= s4;
				when s4 => if rxf_l = '1' then
									nxt_state <= s4;
								else 
									nxt_state <= s5;
								end if;
				when s5 => nxt_state <= s6;
				when s6 => nxt_state <= s7;
				when s7 => nxt_state <= s1;
			END CASE;
	END PROCESS state_trans;
	
	
	oe_l <= '0' when ( state = s2 or state = s3 or state = s5 or state = s6 ) else '1';
	rd_l <= '0' when ( state = s3 or state = s6) else '1';
	
	en_lower <= '1' when ( state = s3 or state = s6) else '0';
	en_upper <= '1' when (state = s6 ) else '0';

	
	en_mem <= (others => '1') when (state = s7 and (mem_full = '0')) else (others => '0');
	addr <= addr_counter;
	
	mem_full <= '1' when (addr_counter = 65535 ) else '0';
	crap <= '1' when not (d_upper & d_lower) = 0 else '0';
	--Can't do for some reason d_out <= (d_upper & d_lower)(8 downto 0);
	concat <= (d_upper & d_lower);
	d_out <= concat(8 downto 0);
	
end Behavioral;

