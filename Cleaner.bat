@echo off
rem ����ɾ��VS��������в�����һЩ��ʱ�ļ���ͨ�����½ű������
 for /r %%i in (*.sdf,*.ncb,*.suo,*.exp,*.user,*.aps,*.idb,*.dep,*.opt,*.plg,*.bsc,*.ilk,*.trg) do del /s /f /q "%%i"
rem VS��������л��ڹ���Ŀ¼�²���Debug��Release����ʱ�����ļ��У�ͨ�����½ű������
 for /r %%i in (debug,release,ipch) do rd /s /q "%%i"
 pause