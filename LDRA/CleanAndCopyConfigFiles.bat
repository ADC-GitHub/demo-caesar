start /wait C:\LDRA_Toolsuite\contestbed  -delete_set=Caesar -94q
if exist C:\LDRA_Workarea\Caesar_tbwrkfls rmdir /s /q C:\LDRA_Workarea\Caesar_tbwrkfls\
mkdir C:\Demo\demo-caesar\LDRA
mkdir C:\Demo\demo-caesar\LDRA\Reports
Copy C:\Demo\ceasar-cipher_org\LDRA C:\Demo\demo-caesar\LDRA