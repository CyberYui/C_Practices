//用于实现同名头文件内的函数
#include "CoordinateSecond.h"
//由于要使用cout，所以引入iostream和namespace std
#include <iostream>
using namespace std;

//构造函数和析构函数
//如果坐标类有一个默认的构造函数，那就不需要在Line的构造函数中初始化列表
//Coordinate::Coordinate()
//而如果坐标类中需要有参数传入，就必须要使用初始化列表的方式把值传给Line的构造函数
Coordinate::Coordinate(int x,int y)
{
	m_iX = x;
	m_iY = y;
	//cout << "Coordinate()" << endl;
	//为了辨认是先构造A还是先构造B，要修改一下输出,输出坐标即可辨别
	cout << "Coordinate()    (" << m_iX << "," << m_iY << ")" << endl;
}
Coordinate::~Coordinate()
{
	//cout << "~Coordinate()" << endl;
	//为了辨认是先销毁A还是先销毁B，要修改一下输出,输出坐标即可辨别
	cout << "~Coordinate()    (" << m_iX << "," << m_iY << ")" << endl;
}

//横坐标的数据封装函数
void Coordinate::setX(int x)
{
	m_iX = x;
}
int Coordinate::getX()
{
	return m_iX;
}
//纵坐标的数据封装函数
void Coordinate::setY(int y)
{
	m_iY = y;
}
int Coordinate::getY()
{
	return m_iY;
}
