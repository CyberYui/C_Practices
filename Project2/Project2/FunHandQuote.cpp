#include <iostream>
#include <stdlib.h>
using namespace std;

//定义一个函数，用于交换两个数的位置
void fun(int &a,int &b);			//声明函数，定义写在主函数下方

int main(void)
{
	int x = 10, y = 20;
	cout << x << "," << y << endl;	//x和y本身的值
	fun(x, y);
	cout << x << "," << y << endl;	//x和y交换后的值

	system("pause");
	return 0;
}

void fun(int &a, int &b)			//声明时函数头结构和实际函数头结构需要一致
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}