REM changed on : 2-3-2023 By (ADC) upgraded to V10.1.0
REM set tool=C:\LDRA_Toolsuite_C_CPP_10.1.0\conrules
SET tool=C:\LDRA_Toolsuite_C_CPP_10.1.0\contestbed
REM start /wait C:\LDRA_Toolsuite_C_CPP_10.0.3\conrules -delete_set=Caesar -94q

mkdir C:\Demo\demo-caesar\LDRA
mkdir C:\Demo\demo-caesar\LDRA\Reports
mkdir C:\Demo\demo-caesar\LDRA\Publish
Copy C:\Demo\caesar-cipher_org\LDRA\*.* C:\Demo\demo-caesar\LDRA
REM if exist C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls rmdir /s /q C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\
if exist C:\LDRA_Workarea_C_CPP_10.1.0\Caesar_V10_tbwrkfls start /wait %tool% demo-caesar -94q

REM start /wait %tool% -delete_set Caesar_V10 
REM start /wait %tool% C:\Demo\demo-caesar\LDRA\Caesar_V10.tcf -review -CSTANDARDS_MODEL=CWE-3.4 -CEXTERNAL_STANDARD=CWE-3.4
REM start /wait %tool% C:\Demo\demo-caesar\LDRA\Caesar_V10.tcf -review -CSTANDARDS_MODEL=CWE-3.4
REM start /wait %tool% ut_wb_encrypt_Ceasar.tcf 212q
REM start /wait C:\LDRA_Toolsuite_C_CPP_10.0.3\tbreports C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10.ldra -codereview_report -annotated_code_report -codereviewmodel_report -guidelinecompliance_report -testmanager_report

REM start /wait c:\LDRA_Toolsuite_C_CPP_10.0.3\contbrun C:\Demo\demo-caesar\LDRA\ut_wb_encrypt_Ceasar.tcf -regress -box=white -quit
REM start /wait C:\LDRA_Toolsuite_C_CPP_10.0.3\tbreports C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10.ldra -dyninit -thisdir -testcase_coverage_overview_report -coverage_report
REM start /wait C:\LDRA_Toolsuite_C_CPP_10.0.3\tbreports C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10.ldra -codereview_report -annotated_code_report -codereviewmodel_report -guidelinecompliance_report -testmanager_report

REM start /wait C:\LDRA_Toolsuite_C_CPP_10.0.3\tbreports C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10.ldra -generate_dyndflow_report
REM start /wait C:\LDRA_Toolsuite_C_CPP_10.0.3\tbreports C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10.ldra –preset="Classic" -tbpublish
REM start /wait C:\LDRA_Toolsuite_C_CPP_10.0.3\tbreports C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10.ldra –preset="Code Coverage" -tbpublish
REM if exist C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10_publish\index.htm start chrome.exe "C:\LDRA_Workarea_C_CPP_10.0.3\Caesar_V10_tbwrkfls\Caesar_V10_publish\index.htm"