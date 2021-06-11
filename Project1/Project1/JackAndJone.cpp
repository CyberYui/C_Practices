/*
任务10

Jone和Jack同时算一道数学题，Jone算的结果并返回，而Jack算了半天说了一句话，我算不出来。

在代码编辑器中完成这道题：

第3、6、9、24根据注释提示填写代码

运行结果为

Jone运算结果是：20
Jack运算结果是：我算不出来

*/

#include <stdio.h>
/* Jone算出结果,故函数有返回值 */
int joneResult(int x, int y, int z)
{
	int sum = x + y + z;
	return sum / 3;          //将sum返回
}
/* Jack没有算出结果只说了一句话，即无返回值函数 */
void jackResult(int x, int y, int z)
{
	printf("我算不出来\n");
	//空函数无返回值
}
int main()
{
	int a, b, c;
	a = 10;
	b = 20;
	c = 30;
	//Jone的返回值类型要同函数类型相同
	int jR = joneResult(a, b, c);
	printf("Jone运算结果是：%d\n", jR);
	printf("Jack运算结果是：");
	//Jack没有算出结果只说了句话，直接调用函数就可以了
	jackResult(a, b, c);
	return 0;
}