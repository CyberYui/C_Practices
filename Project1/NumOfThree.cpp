/*
任务

计算1到20之间不能被3整除的数字之和。

运算结果为： sum=147

*/

#include <stdio.h>
int main()
{
	int i,sum;
	for(i=1,sum=0;i<=20;i++)
	{
		if(i%3==0)    //主要看i是否能被3整除，若能整除，直接跳入下一个循环，即略过了sum+=i的操作
		{
			continue;      //使用continue略过此次循环之后的语句：sum+=i
		}
		sum+=i;          //步进求和
	}
	printf("sum=%d\n",sum);
	return 0;
}