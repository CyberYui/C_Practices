/*任务1

使用循环计算1-2+3-4+5-6+…-100的值？

在编辑器中给出了三种循环体结构的部分代码，请选择合适的循环结构补全代码实现此功能。

运行结果为： sum=-50 
*/

#include <stdio.h>
int main()
{
	/* 小伙伴们：
		   选择你们认为最合理的循环结构完成功能吧 */
	int sum = 0;  //定义计算结果变量sum
	int i = 1;    //定义循环数字变量i
	int flag = 1; //定义符号状态变量flag

	//使用while循环
	while (i <= 100)
	{
		//若i++放这里结果会变为-50
		(i % 2 == 0) ? (sum += flag * (-1)*i) : (sum += flag * i);//奇数用正号，偶数用负号
		i++;
	}


	//下面的循环遵照上面的改就好了
	/*i = 1;  //重新初始化变量i
	//do-while循环
	do{
		i++;
		(i % 2 == 0) ? (sum += flag * (-1)*i) : (sum += flag * i);
	}while(i<=100);


	i = 1;  //重新初始化变量i
	//使用for循环
	for(i=1;i<=100;i++)
	{
		(i % 2 == 0) ? (sum += flag * (-1)*i) : (sum += flag * i);
	}
	*/
	printf("sum=%d\n", sum);
	return 0;
}

//运行其他含主函数的cpp文件请在项目中右键此文件移除即可