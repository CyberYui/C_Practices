//用于实现同名头文件内的函数
#include "LinePra.h"
//由于要使用cout，所以引入iostream和namespace std
#include <iostream>
using namespace std;

//构造函数和析构函数
//Line::Line()
//Line是中间容器，需要初始化列表
Line::Line(int x1, int y1, int x2, int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{//请注意初始化列表中的写法m_coorA(x1,y1)并没有m_coorA.XXXX这样的写法
	cout << "Line()" << endl;
}
Line::~Line()
{
	cout << "~Line()" << endl;
}

//实现A点的设置方法
void Line::setA(int x, int y)
{
	m_coorA.setX(x);
	m_coorA.setY(y);
}
//实现B点的设置方法
void Line::setB(int x, int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
}

//信息的打印方法
void Line::printInfo()
{
	cout << "A:(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "B:(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
}