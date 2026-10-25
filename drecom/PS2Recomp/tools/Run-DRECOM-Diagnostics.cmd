@echo off
setlocal
cd /d "%~dp0"
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0Run-DRECOM-Diagnostics.ps1" %*
echo.
echo DRECOM diagnostic session ended. You can inspect drecom-gs-*.log here.
pause
