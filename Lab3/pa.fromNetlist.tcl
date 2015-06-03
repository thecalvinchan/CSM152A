
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name Lab3 -dir "C:/Users/152/Documents/MeghaCalvin/Lab3/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/152/Documents/MeghaCalvin/Lab3/Timer.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/152/Documents/MeghaCalvin/Lab3} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "Timer.ucf" [current_fileset -constrset]
add_files [list {Timer.ucf}] -fileset [get_property constrset [current_run]]
link_design
