#include "CoordinateThird.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
	cout << "Coordinate(int x, int y)：" << "(" << m_iX << "," << m_iY << ")" << endl;
}
Coordinate::~Coordinate()
{
	cout << "~Coordinate()：" << "(" << m_iX << "," << m_iY << ")" << endl;
}

void Coordinate::setX(int x)
{
	m_iX = x;
}
//get方法要和声明同步，都要在后面加上const
int Coordinate::getX() const
{
	return m_iX;
}

void Coordinate::setY(int y)
{
	m_iY = y;
}
//get方法要和声明同步，都要在后面加上const
int Coordinate::getY() const
{
	return m_iY;
}