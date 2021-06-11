#include <iostream>
#include <stdlib.h>
using namespace std;
//#define x 3与下文的const int x=3是一样的
//两者的区别是，defin是宏定义，编译时不查错，而const要查错

//Part 3中函数的声明，函数体在主函数后
//void fun(const int &a,const int &b);
void fun(int &a, int &b);

int main(void)
{
	/*Part 1

	//这段代码用于展示const如何使用
	const int x = 3;//定义常量x，x不能再被修改值
	//此时再x = 5;是错误的

	int y = 4;
	//下面这行代码有两种方式定义，效果完全相同
	int const *p = &y;//或者const int *p = &y;
	cout << "y的值为：" << *p << endl;
	//*p = 6;此时通过*p修改y的值会报错
	//这时不能赋值，但可以换指向，如：p = &x;
	int k = 100;
	p = &k;
	cout << "k的值为：" << *p << endl;
	//y = 6;但是这样就可以，因为y在定义时是变量

	int z = 5;
	int *const q = &z;//此时q指向z
	//p = &y;此时会报错，因为q的指向被常量化，只能指向z，且不可变
	*q = 10;//虽然不能换指向，但可以赋值
	cout <<"z的值变为："<< z << endl;//这里打印z，看结果

	*/

	/*Part 2

	//接下来用const修饰一些引用
	int x = 3;
	int y = 5;
	int &z = x;
	//int const &z = x;  //这样设置后z是x的别名不可变了，但x依然可变
	z = 10;//这是允许的

	*/

	/*Part 3*/
	//接下来用函数来试试
	int x = 3;
	int y = 5;
	cout << "原本x和y是:" << x << "," << y << endl;
	fun(x, y);
	cout << "现在x和y是:" << x << "," << y << endl;
	system("pause");
	return 0;
}

//	void fun(const int &a,const int &b) //这样设置后是无法改变a和b的值的
void fun(int &a, int &b)
{
	a = 10;
	b = 20;
}