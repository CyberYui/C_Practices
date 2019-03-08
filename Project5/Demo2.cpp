#include <iostream>
#include <stdlib.h>
#include "Circle2.h"
#include "Rect2.h"
using namespace std;

/************************************************************************/
/* 虚析构函数
	   要求:
			1.定义Shape类,成员函数:calcArea(),构造函数,析构函数
			2.定义Rect类,成员函数:calcArea(),构造函数,析构函数
						 数据成员:m_dWidth,m_dHeight
			3.定义Circle类,成员函数:calcArea(),构造函数,析构函数
						   数据成员:m_dR,m_pCenter
			4.定义Coordinate类,成员函数:calcArea(),构造函数,析构函数
							   数据成员:m_iX,m_iY
*/
/************************************************************************/

int main(void)
{
	/*
	Shape *shape1 = new Rect(3, 6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	*/
	//这样之后会发现仅仅执行了两次Shape的析构函数
	//并没有执行Circle的析构函数，即造成了内存泄漏

	//解决方式是给Shape的析构函数和(非必要)Circle的析构函数添加virtual关键字
	Shape *shape1 = new Rect(3, 6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	/*运行结果,可见已经开始执行了子类的析构函数了
		Shape()
		Rect()
		Shape()
		Circle()
		Coordinate()
		Rect() --> calcArea()
		Circle() --> calcArea()
		~Rect()
		~Shape()
		~Circle()
		~Coordinate()
		~Shape()
	*/

	//一些知识
	/*
	1.构造函数不能使用virtual修饰
	2.普通函数不能使用virtual修饰
	3.静态(static)成员函数不能使用virtual修饰
	3.内联函数可以使用virtual修饰的,但是会导致inline关键字被忽略
	*/

	system("pause");
	return 0;
}