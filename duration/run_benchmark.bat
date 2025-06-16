@echo off
setlocal EnableDelayedExpansion

set ROOT=%~dp0..\ 
set PROJECTS=%ROOT%Projects
set REPORTS=%ROOT%Reports

set pname=%1
set PROJDIR=%PROJECTS%\%pname%
set REPODIR=%REPORTS%\%pname%
if not exist "%REPODIR%" mkdir "%REPODIR%"

cd /d "%PROJDIR%"

rem === Optimization selection ===
echo.
echo [36mSelect optimization level:[0m
echo  1 - O0 (no optimization)
echo  2 - O2 (speed optim)
echo  3 - O3 (aggressive optim)
echo  4 - Ofast (maximum optim)
set /p opt=Enter choice: 

if "%opt%"=="1" (set CFLAGS=-O0)
if "%opt%"=="2" (set CFLAGS=-O2)
if "%opt%"=="3" (set CFLAGS=-O3)
if "%opt%"=="4" (set CFLAGS=-Ofast)
if not defined CFLAGS (
    echo [31mInvalid selection.[0m
    exit /b 1
)

rem === Compile ===
set OUTPUT=program.exe
if exist %OUTPUT% del %OUTPUT%

set FILES=
for %%f in (*.cpp) do (
    set FILES=!FILES! %%f
)
if "!FILES!"=="" (
    echo [31mNo source files found![0m
    exit /b 1
)

g++ %CFLAGS% -march=native -Wall -Wextra -std=c++17 -o %OUTPUT% !FILES!

if errorlevel 1 (
    echo [31mCompilation failed.[0m
    exit /b 1
)

echo [32mCompiled successfully.[0m

rem === Execute & measure ===
for /f %%T in ('powershell -command "$s=[Diagnostics.Stopwatch]::StartNew(); .\%OUTPUT%; $s.Stop(); $s.Elapsed.TotalMilliseconds"') do set TIME=%%T

echo Benchmark: %TIME% ms
echo %DATE% %TIME% >> "%REPODIR%\results.txt"

rem === Cleanup ===
if exist %OUTPUT% del %OUTPUT%

rem === Performance Regression Check ===
echo [33m=== Performance History ===[0m
set MIN=
for /f "tokens=2" %%a in ('type "%REPODIR%\results.txt"') do (
    if not defined MIN (
        set MIN=%%a
    ) else (
        set /a curr=%%a*1000
        set /a best=!MIN!*1000
        if !curr! lss !best! set MIN=%%a
    )
)
echo Best time so far: %MIN% ms

cd /d %ROOT%
endlocal
