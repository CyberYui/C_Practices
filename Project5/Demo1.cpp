#include <iostream>
#include <stdlib.h>
#include "Circle1.h"
#include "Rect1.h"
using namespace std;

/************************************************************************/
/* 动态多态、虚函数
	   要求：
		   1.定义Shape类,成员函数:calcArea(),构造函数,析构函数
		   2.定义Rect类,成员函数:calcArea(),构造函数,析构函数
						数据成员:m_dWidth,m_dHeight
		   3.定义Circle类,成员函数:calcArea(),构造函数,析构函数
						  数据成员:m_dR
*/
/************************************************************************/

int main(void)
{
	/*//Part1
	Shape *shape1 = new Rect(3,6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	*/
	/*很明显，通过shape1和shape2调用的都是shape的面积计算函数
		Shape()
		Rect()
		Shape()
		Circle()
		Shape() --> calcArea()
		Shape() --> calcArea()
		~Shape()
		~Shape()
		请按任意键继续. . .
	*/
	//修改各类的计算函数,加上virtual关键字,子类可不加,但父类必须加
	Shape *shape1 = new Rect(3, 6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	/*修改之后就可以正常调用了
		Shape()
		Rect()
		Shape()
		Circle()
		Rect() --> calcArea()		//结果正如预想
		Circle() --> calcArea()
		~Shape()
		~Shape()
		请按任意键继续. . .
	*/

	system("pause");
	return 0;
}