/************************************************************************/
/*  示例要求:                                                           */
/*      定义一个Array类                                                 */
/*      数据成员：m_iLen表示数组长度                                    */
/*      成员函数：构造函数			                                    */
/*                析构函数                                              */
/*                len的封装函数                                         */
/*                信息输出函数printInfo                                 */
/*  示例目的：                                                          */
/*      了解this指针的用法及其神秘之处                                  */
/************************************************************************/
#include <iostream>
#include <stdlib.h>
#include "ArrayThisF.h"
using namespace std;

int main(void)
{
	Array arr1(10);
	//cout << arr1.getLen() << endl;
	//arr1.printInfo();
	//this指针返回过来之后，可以用这样的方法改写代码
	arr1.printInfo().setLen(5);
	//使用连续的点号，实现了方法的连续实现，这就是this指针的一个作用
	//cout << "len=" << arr1.getLen() << endl;
	/*
		Array(int len)
		len=10
		~Array()
		len=10

		很明显在这里并没有改变arr1的len值
		原因是返回的*this变成了一个临时的Array对象
	*/
	//修改了printInfo函数后回来,就改变了arr1.len的值
	cout << "len=" << arr1.getLen() << endl;
	arr1.printThis();//打印this指针的地址
	//再打印一下arr1的地址值看看
	cout << "arr1=" << &arr1 << endl;
	//看到结果会发现两个的地址是一模一样的

	system("pause");
	return 0;
}

/*
	Array& Array::printInfo()
	函数可以改写为
	Array* Array::printInfo()
	这样只需要把arr1.printInfo().setLen(5);写为
	arr1->printInfo()->setLen(5);
	即可得到同样的结果
*/