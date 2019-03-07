#include "LineThird.h"
#include <iostream>
using namespace std;

Line::Line(int x1, int y1, int x2, int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{
	cout << "Line() start" << endl;
	//对于对象成员需要用到初始化列表
	//Coordinate m_coorA(x1, y1);
	//Coordinate m_coorB(x2, y2);
	cout << "Line() end" << endl;
}
Line::~Line()
{
	cout << "~Line()" << endl;
}
void Line::setA(int x, int y)
{
	//m_coorA.setX(x);
	//m_coorA.setY(y);
}
void Line::setB(int x, int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
}
void Line::printInfo()
{
	cout << "这是普通成员函数printInfo()的结果" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
	cout << "这是普通成员函数的结尾。" << endl;
}
//若编译不报错，则同名的常成员函数和普通成员函数互为重载
void Line::printInfo() const
{
	cout << "这是常成员函数printInfo() const的结果：" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
	cout << "这是常成员函数的结尾。" << endl;
}