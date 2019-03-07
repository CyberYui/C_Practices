/*
任务14

根据所学知识在代码编辑器中：

第4、16行根据注释提示填写相应代码

使运行结果如下所示

	x=2
	x=4
	x=8
	x=16
	x=32
	x=100

*/

#include <stdio.h>
void fn()
{
	static int x = 1;   //定义静态局部变量
	x *= 2;
	printf("x=%d\n", x);
}

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		fn();
	}
	extern int x;      //调用外部变量
	printf("x=%d\n", x);
	return 0;
}
int x = 100;