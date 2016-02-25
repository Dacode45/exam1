isim force add /toplvl/d_clk 1 -radix bin -value 0 -radix bin -time 8 ns -repeat 16 ns
isim force add /toplvl/v_clk 1 -radix bin -value 0 -radix bin -time 20 ns -repeat 40 ns
isim force add /toplvl/reset_h 1 -radix bin
isim force add /toplvl/rxf_l 1 -radix bin
isim force add /toplvl/txe_l 1 -radix bin
run 168 ns
isim force add /toplvl/reset_h 0 -radix bin
run 160 ns
isim force add /toplvl/rxf_l 0 -radix bin
run 32 ns
isim force add /toplvl/data 10101010 -radix bin
run 16 ns
isim force add /toplvl/rxf_l 1 -radix bin
run 160 ns
isim force add /toplvl/rxf_l 0 -radix bin
run 32 ns
isim force add /toplvl/rxf_l 1 -radix bin
run 160 ns
isim force add /toplvl/rxf_l 0 -radix bin
run 320 ns
run 16000000 ns