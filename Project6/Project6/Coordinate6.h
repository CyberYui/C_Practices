#pragma once
#include <iostream>
using namespace std;

class Coordinate
{
	//负号友元函数重载
	friend Coordinate& operator-(Coordinate &coor);
public:
	Coordinate(int x, int y);
	//Coordinate& operator-();//负号成员函数重载
	Coordinate& operator++();//前置++
	Coordinate operator++(int);//后置++,int仅仅是个标志
	int getX();
	int getY();
protected:
private:
	int m_iX;
	int m_iY;
};