#include <iostream>
#include <stdlib.h>
#include "Circle3.h"
#include "Shape3.h"
using namespace std;

/************************************************************************/
/* 虚函数表
		1.定义Shape类,成员函数:构造函数,析构函数,calcArea()
		2.定义Circle类,成员函数:构造函数,析构函数
					   数据成员:m_iR

	概念说明:1.对象的大小:在类实例化出的对象当中,它的数据成员所占据的基本内存单元的大小
			 2.对象的地址:即通过类实例化的对象,其所占内存单元的第一个地址
			 3.对象成员的地址:实例化的对象,其每一个数据成员所占据的地址
			 4.虚函数表指针:在具有虚函数的情况下,实例化一个对象,其第一块内存存储的指针指向虚函数表,即虚函数表指针
*/
/************************************************************************/

int main(void)
{

	//Shape shape;
	//cout << sizeof(shape) << endl;//打印出的大小是1

	//int *p = (int *)&shape;//强制类型转换，将shape类型转换为int型
	//cout << p << endl;//打印shape的地址
	//cout << (unsigned int)(*p) << endl;//用无符号整型形式打印p指针的地址

	//Circle circle(100);
	//cout << sizeof(circle) << endl;

	//int *q=(int *)&circle;//强制类型转换
	//cout << q << endl;//打印circle的地址
	//cout << (unsigned int)(*q) << endl;
	//q++;
	//cout << (unsigned int)(*q) << endl;

	//以上为无虚函数的实验内容
	//以下实验虚函数相关,修改了Shape3.h-->calcArea()
	//Shape shape;//修改之后定义对象,看它的大小,若为4,则证明有虚函数表指针
	//cout << sizeof(shape) << endl;

	//以下实验虚析构函数相关
	//Shape shape;//实例化时会有虚函数表指针,大小也为4
	//cout << sizeof(shape) << endl;
	//证明虚析构函数也会在实例化时产生一个虚函数表指针

	//以下实验Shape和Circle同时有的状况
	Shape shape;
	cout << sizeof(shape) << endl;
	Circle circle(100);
	cout << sizeof(circle) << endl;
	//可见circle实例化时大小为8,即虚函数表指针+变量int m_iR的大小

	system("pause");
	return 0;
}