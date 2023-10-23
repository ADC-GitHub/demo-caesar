REM run regression test 
start /wait c:\LDRA_Toolsuite_C_CPP_10.0.2\contbrun C:\Demo\demo-caesar\LDRA\ut_wb_encrypt_Ceasar.tcf -regress -box=white -quit
start /wait C:\LDRA_Toolsuite_C_CPP_10.0.2\tbreports C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10.ldra -dyninit -thisdir -testcase_coverage_overview_report -coverage_report
start /wait C:\LDRA_Toolsuite_C_CPP_10.0.2\tbreports C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10.ldra -codereview_report -annotated_code_report -codereviewmodel_report -guidelinecompliance_report -testmanager_report
