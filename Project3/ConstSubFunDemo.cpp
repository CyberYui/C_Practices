/************************************************************************/
/* 常对象成员、常函数、常对象：	                                        */
/*     要求：                                                           */
/*           定义两个类：                                               */
/*               坐标类：Coordinate			                            */
/*               数据成员：横坐标m_iX，纵坐标m_iY                       */
/*               成员函数：构造函数、析构函数、数据封装函数	            */
/*                                                                      */
/*               线段类:Line                                            */
/*               数据成员：点A  m_coorA、点B  m_coorB                   */
/*               成员函数：构造函数、析构函数、数据封装函数             */
/*                         信息打印函数                                 */
/************************************************************************/
#include <iostream>
#include <stdlib.h>
#include "LineThird.h"
using namespace std;

int main(void)
{
	//实例化新的Line对象
	Line line(1, 2, 3, 4);
	line.printInfo();//可以发现这个line是没法调用printInfo() const的
	cout << "两个不同的line" << endl;
	const Line line2(5, 6, 7, 8);
	line2.printInfo();//由于是常对象，所以调用了常成员函数

	system("pause");
	return 0;
}
/*
	Coordinate(int x, int y)：(1,2)			//初始化列表内容，调用点构造函数
	Coordinate(int x, int y)：(3,4)			//输出了A和B的坐标
	Line() start							//初始化列表完成后才开始构造线段
	Line() end
	这是普通成员函数printInfo()的结果		//非常对象线段的printInfo
	(1,2)
	(3,4)
	这是普通成员函数的结尾。
	两个不同的line							//分隔符
	Coordinate(int x, int y)：(5,6)			//常对象线段创造的A和B
	Coordinate(int x, int y)：(7,8)
	Line() start
	Line() end
	这是常成员函数printInfo() const的结果：	//常对象线段的printInfo
	(5,6)
	(7,8)
	这是常成员函数的结尾。
	请按任意键继续. . .						//system("pause");
	~Line()									//开始调用析构函数可见栈是后进先出
	~Coordinate()：(7,8)
	~Coordinate()：(5,6)
	~Line()
	~Coordinate()：(3,4)
	~Coordinate()：(1,2)
*/