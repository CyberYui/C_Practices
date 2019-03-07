#include <stdio.h>
//此文件中定义say函数
//由于需要用到InternalAndExternal.cpp中的printLine函数，所以要先声明一下
void printLine();
extern void say()
{
	printLine();
	printf("I love imooc\n");
	printf("good good study!\n");
	printf("day day up!\n");
	printLine();
}