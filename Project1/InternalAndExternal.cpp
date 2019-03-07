/*任务15
小编把代码编辑器中的某个方法定义错了，你能帮他改正吗？

在代码编辑器中：

第3行将函数改为外部函数

运行结果为

	**************
	I love imooc
	good good study!
	day day up!
	**************

//在慕课网上的两个文件(C语言)是:

[hello.c]

#include <stdio.h>
#include "test.c"   //引用test.c文件
extern void printLine()     //这里定义的方法对吗？
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

这样仍能产生正确的结果，但是在vs2017中就不行

*/
//在C++中有两种方式引用外部函数，但其实质是同一个方法
//即在主函数中声明要调用的函数，系统编译时会自动调用函数体
#include <stdio.h>
//下面显示两种方式引用另一个cpp文件(InternalAndExternalFu.cpp)中的函数
//void say();//1.声明say函数，从而实现调用
#include "InternalAndExternal.h";//2.调用一个头文件，头文件里有另一个cpp文件的函数声明
extern void printLine()     //这里定义的方法对吗？
{
	printf("**************\n");
}
int main()
{
	say();
	return 0;
}