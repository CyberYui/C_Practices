#pragma once
#include <iostream>
using namespace std;

class Coordinate
{
	//负号友元函数重载
	friend Coordinate& operator-(Coordinate &coor);
	//加号友元函数重载
	friend Coordinate& operator+(Coordinate coor1, Coordinate coor2);
	//输出运算符重载,必须写为友元函数重载
	friend ostream &operator<<(ostream &output, Coordinate &coor);
public:
	Coordinate(int x, int y);
	//Coordinate& operator-();//负号成员函数重载
	Coordinate& operator++();//前置++
	Coordinate operator++(int);//后置++,int仅仅是个标志
	//沿用Demo6内容,以下为新内容
	//Coordinate& operator+(Coordinate &coor);//+号成员函数重载

	//索引运算符重载,必须写为成员函数重载
	int operator[](int index);
	int getX();
	int getY();
protected:
private:
	int m_iX;
	int m_iY;
};