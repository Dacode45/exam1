
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
		wr_l : OUT STD_LOGIC;
		siwua : OUT STD_LOGIC;
		addr : OUT STD_LOGIC_VECTOR(15 downto 0);
		en_mem : OUT STD_LOGIC_VECTOR(0 downto 0);
		d : INOUT STD_LOGIC_VECTOR(7 downto 0);
		reset_l : IN STD_LOGIC;
		d_out : OUT STD_LOGIC_VECTOR(8 downto 0);
		watch_dog : OUT STD_LOGIC
	);
end control;

architecture Behavioral of control is
	TYPE states IS (s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
	
	SIGNAL state: states := s0;
	SIGNAL nxt_state : states := s0;
	
	--Internal Signals
	--Resgister
	SIGNAL d_int : STD_LOGIC_VECTOR(7 downto 0) := "ZZZZZZZZ"; --internal register 
	SIGNAL en_o : STD_LOGIC := '0'; -- enable data output
	SIGNAL en_i : STD_LOGIC := '0'; -- enable data input
	
	SIGNAL tmp_en_o : STD_LOGIC := '0'; -- enable data output prep
	SIGNAL tmp_en_i : STD_LOGIC := '0'; -- enable data input
	SIGNAL tmp_rd_l : STD_LOGIC := '1'; -- register for rd
	SIGNAL tmp_oe_l : STD_LOGIC := '1'; -- register for oe
	SIGNAL tmp_wr_l : STD_LOGIC := '1'; -- register for wr
	SIGNAL tmp_siwua : STD_LOGIC := '1'; -- register for siwua
	SIGNAL tmp_d : STD_LOGIC_VECTOR(7 downto 0) := "ZZZZZZZZ"; --internal register 
	
	--Register
	SIGNAL addr_counter : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
	SIGNAL watch_dog_int : STD_LOGIC := '0';
	SIGNAL watch_dog_counter: STD_LOGIC_VECTOR(2 downto 0) := (others => '0');
begin

	--Handle register transfers.
	clkd : PROCESS (clk)
	BEGIN
		--Handle states
		if (rising_edge(clk)) then
			if(reset_l = '0') then
				state <= s0;
			else 
				state <= nxt_state;
			end if;
		--Write Data
			if en_i = '1' then
				d_int <= d;
			end if;
			
			
		--Watchdog
		if(state = s0 or state = s1 or state = s2 or state = s3 or state = s4 or state = s5 or state = s6 or state = s7) then
				watch_dog_int <= watch_dog_counter(2);
			else
				watch_dog_int <= '0';
			end if;
			
			watch_dog_counter <= watch_dog_counter + 1;
		
		d <= tmp_d;
	
	if(en_o = '0') then
			tmp_d <= d_int;
		else
			tmp_d <= d_int;
		end if;
		
		end if;
		
		
	END PROCESS clkd;
	
	--Handle state transitions
	state_trans: PROCESS(reset_l, rxf_l, txe_l, state)
	BEGIN
		--set defaut 
		nxt_state <= state;
		CASE state IS
			WHEN s0 => if (rxf_l = '1') then
							nxt_state <= s0;
						else
						nxt_state <= s1;
						end if;
			WHEN s1 => nxt_state <= s2;
			WHEN S2 => nxt_state <= s3;
			WHEN s3 => nxt_state <= s4;
			WHEN s4 => if(txe_l = '1') then
						nxt_state <= s4;
						else
						nxt_state <= s5;
						end if;
			WHEN s5 => nxt_state <= s6;
			WHEN s6 => nxt_state <= s7;
			WHEN s7 => nxt_state <= s8;
			WHEN s8 => nxt_state <= s9;
			WHEN s9 => nxt_state <= s10;
			WHEN s10 => nxt_state <= s0;
		END CASE;
	END PROCESS state_trans;
	
	--Handle CL to Register transfers
	output: PROCESS(clk)
	BEGIN
	
		if(rising_edge(clk)) then
			rd_l <= tmp_rd_l;
			oe_l <= tmp_oe_l;
			wr_l <= tmp_wr_l;
			siwua <= tmp_siwua;
		end if;
		
	END PROCESS output;
	
	--State transitions
	tmp_rd_l <= '0' when(state = s2 or state = s3) else '1';
	tmp_oe_l <= '0' when(state = s1 or state = s2 or state = s3) else '1';
	tmp_wr_l <= '0' when(state = s6) else '1';
	tmp_siwua <= '0' when(state = s8) else '1';
	en_i <= '1' when(state = s1 or state = s2) else '0';
	en_o <= '1' when(state = s5 or state = s6) else '0';
end Behavioral;

