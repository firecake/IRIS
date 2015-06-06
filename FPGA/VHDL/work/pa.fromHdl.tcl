
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name IRIS -dir "C:/IRIS/work/planAhead_run_1" -part xc3s200avq100-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "C:/IRIS/IRIS.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {../ipcore_dir/RAM.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../vhdl/IRIS_Pack.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Clk_Manager.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../vhdl/IRISv2.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top IRIS $srcset
add_files [list {C:/IRIS/IRIS.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s200avq100-4
