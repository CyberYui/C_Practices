#include <stdio.h>
//���ļ��ж���say����
//������Ҫ�õ�InternalAndExternal.cpp�е�printLine����������Ҫ������һ��
void printLine();
extern void say()
{
	printLine();
	printf("I love imooc\n");
	printf("good good study!\n");
	printf("day day up!\n");
	printLine();
}