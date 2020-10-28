set MATLAB=D:\MatLab_2016

cd .

if "%1"=="" (D:\MATLAB~1\bin\win64\gmake -f Chart.mk all) else (D:\MATLAB~1\bin\win64\gmake -f Chart.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
