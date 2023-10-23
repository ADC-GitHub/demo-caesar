REM create reports and publish index
start /wait C:\LDRA_Toolsuite_C_CPP_10.0.2\tbreports C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10.ldra -codereview_report -annotated_code_report -codereviewmodel_report -guidelinecompliance_report -testmanager_report

start /wait C:\LDRA_Toolsuite_C_CPP_10.0.2\tbreports C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10.ldra -generate_dyndflow_report
start /wait C:\LDRA_Toolsuite_C_CPP_10.0.2\tbreports C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10.ldra –preset="Classic" -tbpublish
start /wait C:\LDRA_Toolsuite_C_CPP_10.0.2\tbreports C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10.ldra –preset="Code Coverage" -tbpublish
if exist C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10_publish\index.htm start chrome.exe "C:\LDRA_Workarea_C_CPP_10.0.2\Caesar_V10_tbwrkfls\Caesar_V10_publish\index.htm"