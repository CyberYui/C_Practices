/*任务18

替换指定数组中的最大元素。要求指定整数为数组arr2中的第一个元素arr2[0]。

在代码编辑器中：

第22行填写相应代码

运行结果为

	10 1 3 12 22 

*/

#include <stdio.h>
void replaceMax(int arr[5], int value)//arr[5]表示希望第一个数组有5个元素
{
	int max = arr[0];
	int index = 0;
	int i;
	for (i = 1; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];    //将数组中较大的数赋值给max
			index = i;     //记录当前索引
		}
	}
	arr[index] = value;
}

int main()
{
	int arr1[] = { 10,41,3,12,22 };
	int arr2[] = { 1,2,3,4,5 };
	int i;
	replaceMax(arr1, arr2[0]); //将数组arr1和数组arr2的第一个元素传入函数中
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}