/****************C++ Practice 3******************/
/*知识点：bool类型 命名空间 输入输出            */
/*题目要求：                                    */
/*使用一个函数找出一个整形数组中的最大值或最小值*/
/************************************************/
#include <iostream>
using namespace std;

//首先定义寻找最大值和最小值的函数
//函数的参数需要用一个数组，一个基数用于表示有几个数，一个flag
namespace A
{
	int getMaxOrMin(int *arr, int count, bool isMax)
	{
		int temp = arr[0];
		//我们是从第一个数拿起开始的，故可以直接跳过第一个数开始比较
		for (int i = 1; i < count; i++)
		{
			if (isMax = true)//程序会自动认为1是true，0是false
			{
				if (temp < arr[i])
				{
					temp = arr[i];
				}
			}
			else
			{
				if (temp > arr[i])
				{
					temp = arr[i];
				}
			}
		}
		return temp;
	}
}


int main(void)
{
	int arr[4] = { 3,5,7,1 };//日后可以让数组也动态化
	bool isMax;
	cout << "请输入是否要求最大值(1是0否):" << endl;
	cin >> isMax;
	cout << A::getMaxOrMin(arr, 4, isMax) << endl;
	system("pause");
	return 0;
}