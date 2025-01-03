@echo off
setlocal enabledelayedexpansion

:: Initialize user details and balance
set "username=Matildadee188"
set "balance=900.100.000"

:main_menu
cls
echo ============================
echo Welcome to the Yik Jailbreak
echo ============================
echo 1. View Balance
echo 2. Transfer Funds
echo 3. View User Details
echo 4. Exit
echo ============================
echo.
set /p choice="Please select an option (1-4): "

if "%choice%"=="1" goto view_balance
if "%choice%"=="2" goto transfer_funds
if "%choice%"=="3" goto view_user_details
if "%choice%"=="4" exit
echo Invalid choice, please try again.
pause
goto main_menu

:view_balance
cls
echo Your current balance is: $%balance%
pause
goto main_menu

:transfer_funds
cls
set /p transfer_amount="Enter amount to transfer: $"
if !transfer_amount! lss 1 (
    echo Invalid amount. Please enter a positive number.
    pause
    goto transfer_funds
)
if !transfer_amount! gtr !balance! (
    echo Insufficient funds. Your current balance is: $%balance%
    pause
    goto transfer_funds
)

set /p recipient_account="Enter recipient account number: "
set /p reply1= "Enter Bank name: "
set /a balance-=transfer_amount
set /p reply="Proceed?(Y/N): "
echo Transaction in process...
ping localhost -n 180 > nul
echo Transaction Failed, Please check network connectivity.
echo.
::echo Transferred $%transfer_amount% to account number %recipient_account%.
::echo Your new balance is: $%balance%
pause
goto main_menu

:view_user_details
cls
echo ============================
echo User Details
echo ============================
echo Name: %username%
::echo Account Number: %account_number%
echo Balance: $%balance%
pause
goto main_menu