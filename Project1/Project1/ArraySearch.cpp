/*任务20

小编想写一个实现数组元素的查找功能的小程序，但是有些地方忘记怎么写了，请帮他完善吧

在代码编辑器中：

9-13行以及22行填写正确代码

运行结果为

	8在数组中存在，下标为：3

*/


#include <stdio.h>
int getIndex(int arr[5], int value)
{
	int i;
	int index;
	for (i = 0; i < 5; i++)
	{
		/* 数组查询功能 */
		if (arr[i] == value)
		{
			index = i;//只要有，就将index值改变，并跳出循环
			break;
		}
		else
		{
			index = -1;//没有，就将index值设为-1，并继续循环，直到找到相同元素或循环结束
		}
	}
	return index;
}

int main()
{
	int arr[5] = { 3,12,9,8,6 };
	int value = 8;
	int index = getIndex(arr, value);      //根据定义函数传递参数
	if (index != -1)//index的值就像个flag一样，用于判断
	{
		printf("%d在数组中存在，下标为：%d\n", value, index);
	}
	else
	{
		printf("%d在数组中不存在。\n", value);
	}
	return 0;
}