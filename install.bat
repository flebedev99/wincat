@echo off
title Install WinCat
echo Windows Cat Command Install
echo -------------------------------------
echo Close the window to cancel

pause

setx PATH "%MY_PATH%;%cd%\bin"

echo  [#################]
echo Installation Complete! You may now close this window.
pause
exit