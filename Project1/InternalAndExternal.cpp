/*����15
С��Ѵ���༭���е�ĳ������������ˣ����ܰ���������

�ڴ���༭���У�

��3�н�������Ϊ�ⲿ����

���н��Ϊ

	**************
	I love imooc
	good good study!
	day day up!
	**************

//��Ľ�����ϵ������ļ�(C����)��:

[hello.c]

#include <stdio.h>
#include "test.c"   //����test.c�ļ�
extern void printLine()     //���ﶨ��ķ�������
{
   printf("**************\n");
}
int main()
{
	say();
	return 0;
}

[test.c]

#include <stdio.h>
static void say(){
	printLine();
	printf("I love imooc\n");
	printf("good good study!\n");
	printf("day day up!\n");
	printLine();
}

�������ܲ�����ȷ�Ľ����������vs2017�оͲ���

*/
//��C++�������ַ�ʽ�����ⲿ����������ʵ����ͬһ������
//����������������Ҫ���õĺ�����ϵͳ����ʱ���Զ����ú�����
#include <stdio.h>
//������ʾ���ַ�ʽ������һ��cpp�ļ�(InternalAndExternalFu.cpp)�еĺ���
//void say();//1.����say�������Ӷ�ʵ�ֵ���
#include "InternalAndExternal.h";//2.����һ��ͷ�ļ���ͷ�ļ�������һ��cpp�ļ��ĺ�������
extern void printLine()     //���ﶨ��ķ�������
{
	printf("**************\n");
}
int main()
{
	say();
	return 0;
}