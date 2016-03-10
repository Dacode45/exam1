
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name exam1 -dir "C:/vhdl_stuff/exam1/planAhead_run_2" -part xc6slx9tqg144-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "exam1.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {ipcore_dir/my2port.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {vga.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ledModule.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {control.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {toplvl.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top toplvl $srcset
add_files [list {exam1.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/my2port.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-2
