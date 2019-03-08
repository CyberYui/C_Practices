#include "Coordinate6.h"

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}

//成员函数重载
//Coordinate &/*这调用的是引用*/Coordinate::operator-()
//{
//	//this->m_iX=-(this->m_iX);
//	//this->m_iY=-(this->m_iY);	
//	//两种方式作用相同
//	m_iX = -m_iX;
//	m_iY = -m_iY;
//	return *this;
//	//由于函数调用的是引用,所以将当前的对象返回,即*this指对象,只有this指指针
//}

Coordinate &operator-(Coordinate &coor)/*友元函数是一个自有的函数*/
{
	//this->m_iX=-(this->m_iX);
	//this->m_iY=-(this->m_iY);	
	//两种方式作用相同
	coor.m_iX = -coor.m_iX;
	coor.m_iY = -coor.m_iY;
	return coor;
	//由于函数调用的是引用,所以将当前的对象返回,即*this指对象,只有this指指针
}

Coordinate &Coordinate::operator++()//前置++
{
	m_iX++;
	m_iY++;
	return *this;
}

Coordinate Coordinate::operator++(int)//后置++
{
	Coordinate old(*this);//拷贝构造old
	m_iX++;
	m_iY++;
	return old;//此时return的old实现了值的变化
}