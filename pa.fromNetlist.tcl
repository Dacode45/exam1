
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name exam1 -dir "C:/vhdl_stuff/exam1/planAhead_run_3" -part xc6slx9tqg144-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/vhdl_stuff/exam1/toplvl.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/vhdl_stuff/exam1} {ipcore_dir} }
add_files [list {ipcore_dir/my2port.ncf}] -fileset [get_property constrset [current_run]]
set_param project.pinAheadLayout  yes
set_property target_constrs_file "exam1.ucf" [current_fileset -constrset]
add_files [list {exam1.ucf}] -fileset [get_property constrset [current_run]]
link_design
