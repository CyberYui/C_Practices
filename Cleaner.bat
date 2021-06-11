@echo off
rem 用于删除VS编译过程中产生的一些临时文件，通过以下脚本可清除
 for /r %%i in (*.sdf,*.ncb,*.suo,*.exp,*.user,*.aps,*.idb,*.dep,*.opt,*.plg,*.bsc,*.ilk,*.trg) do del /s /f /q "%%i"
rem VS编译过程中会在工程目录下产生Debug、Release等临时编译文件夹，通过以下脚本可清除
 for /r %%i in (debug,release,ipch) do rd /s /q "%%i"
 pause