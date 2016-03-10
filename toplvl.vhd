library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity toplvl is
	PORT(
		d_clk	: IN STD_LOGIC;
		v_clk : IN STD_LOGIC;
		
		--control
		reset_l : IN STD_LOGIC;
		
		rxf_l : IN STD_LOGIC;
		txe_l : IN STD_LOGIC;
		oe_l : OUT STD_LOGIC;
		rd_l : OUT STD_LOGIC;
		wr_l : OUT STD_LOGIC;
		siwua : OUT STD_LOGIC;
		wdi: OUT STD_LOGIC;
		data : INOUT STD_LOGIC_VECTOR(7 downto 0);
		---vga
		
		h_sync : OUT STD_LOGIC;
		v_sync : OUT STD_LOGIC;
		r0 : OUT STD_LOGIC;
		r1 : OUT STD_LOGIC;
		r2 : OUT STD_LOGIC;
		g0 : OUT STD_LOGIC;
		g1 : OUT STD_LOGIC;
		g2 : OUT STD_LOGIC;
		b0 : OUT STD_LOGIC;
		b1 : OUT STD_LOGIC;
		b2 : OUT STD_LOGIC;
		led: OUT STD_LOGIC
		
	);
end toplvl;


architecture Behavioral of toplvl is

--Memory
COMPONENT my2port
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(8 DOWNTO 0);
    clkb : IN STD_LOGIC;
    rstb : IN STD_LOGIC;
    addrb : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    doutb : OUT STD_LOGIC_VECTOR(8 DOWNTO 0)
  );
END COMPONENT;

--LED
COMPONENT ledModule
	PORT(
		clk	: IN STD_LOGIC;
		blink : in std_logic_vector(0 downto 0);
		led : out std_logic
	);
end COMPONENT;

--Control
COMPONENT control
	PORT(
		clk	: IN STD_LOGIC;
		rxf_l : IN STD_LOGIC;
		txe_l : IN STD_LOGIC;
		oe_l : OUT STD_LOGIC;
		rd_l : OUT STD_LOGIC;
		addr : OUT STD_LOGIC_VECTOR(15 downto 0);
		en_mem : OUT STD_LOGIC_VECTOR(0 downto 0);
		d_in : IN STD_LOGIC_VECTOR(7 downto 0);
		reset_l : IN STD_LOGIC;
		d_out : OUT STD_LOGIC_VECTOR(8 downto 0);
		watch_dog : OUT STD_LOGIC
	);
end COMPONENT;

-- VGA
COMPONENT vga is
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
end COMPONENT;

--Wiring  signals
SIGNAL color_in : STD_LOGIC_VECTOR(8 downto 0);
SIGNAL color_out : STD_LOGIC_VECTOR(8 downto 0);

SIGNAL mem_en : STD_LOGIC_VECTOR(0 downto 0);
SIGNAL reset_h : STD_LOGIC;

SIGNAL addr_in : STD_LOGIC_VECTOR(15 downto 0);
SIGNAL addr_out : STD_LOGIC_VECTOR(15 downto 0);

begin

	controlModule : control
		PORT MAP(
			clk => d_clk,
			rxf_l => rxf_l,
			txe_l => txe_l,
			oe_l => oe_l,
			rd_l => rd_l,
			en_mem => mem_en,
			d_out => color_in,
			addr => addr_in,
			reset_l => reset_l,
			watch_dog => wdi,
			d_in => data);
	
	vgaModule : vga
		PORT MAP(
			clk => v_clk,
			data => color_out,
			h_sync => h_sync,
			v_sync => v_sync,
			addr => addr_out,
			r0 => r0,
			r1 => r1,
			r2 => r2,
			g0 => g0,
			g1 => g1,
			g2 => g2,
			b0 => b0,
			b1 => b1,
			b2 => b2);
			
	memory : my2port
		PORT MAP(
			clka => d_clk,
			wea => mem_en,
			addra => addr_in,
			dina => color_in,
			clkb => v_clk,
			rstb => reset_h,
			addrb => addr_out,
			doutb => color_out
		);
		
		ledControl : ledModule
			PORT MAP(
				clk => d_clk,
				blink => mem_en,
				led => led
			);
	
		wr_l <= '1';
		siwua <= '1';
		
		reset_h <= not reset_l;

end Behavioral;

