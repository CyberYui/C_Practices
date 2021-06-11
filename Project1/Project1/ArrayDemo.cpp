/*任务17

分别用三种方式在代码编辑器中的初始化3个数组，长度分别是3，
并使用格式化输出语句，输出3个数组中的第二个元素。

在代码编辑器中，根据注释提示，填写代码。
*/

/*注意！！！这个程序会崩溃，不知道为什么...*/

#include <stdio.h>
int main()
{
	//第一种形式
	int arrFirst[3] = { 1,2,3 };//这样的初始化数组的[]中是长度的意思
	//第二种形式
	int arrSecond[] = { 4,5,6 };//这样的初始化最容易理解，只要记住c语言中数组下标从0算起
	//第三种形式
	int arrThird[3];//这样的初始化数组的[]中是长度的意思
	//给arrThird数组每个元素初始化
	arrThird[0] = 7;
	arrThird[1] = 8;
	arrThird[2] = 9;
	//综上，第一种和第三种形式的声明中，[x]的内容x都是指数组长度，实际数组长度是x，但下标只到x-1


	//输出第一个数组中的第二个元素
	printf("arrFirst[1]=%d\n", arrFirst[1]);
	//输出第二个数组中的第二个元素
	printf("arrSecond[1]=%d\n", arrSecond[1]);
	//输出第三个数组中的第二个元素
	printf("arrThird[1]=%d\n\n\n", arrThird[1]);
	
	//打印第一个数组，便于分析
	for (int i = 0; i <= 2; i++)
	{
		printf("arrFirst[%d]=%d\n", i, arrFirst[i]);
	}
	return 0;
}