//Ch3Test
#include <iostream>
using namespace std;
int main(void)
{
	//定义常量count
	const int count = 3;
	//int const *const p = &count;同下面这一行一样的效果
	const int *const p = &count;//这里意思是p指向count，不是p指向别名count
	//打印count次字符串Hello C++
	for (int i = 0; i < *p; i++)
	//这里i<*p其实就是i<count的意思
	//注意：for(int i = 0; i < p; i++)是错误的，p是指针，一定要带*
	{
		cout << "Hello C++" << endl;
	}
	system("pause");
	return 0;
}