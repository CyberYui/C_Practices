#pragma once
#include <iostream>
using namespace std;

class Coordinate
{
	//������Ԫ��������
	friend Coordinate& operator-(Coordinate &coor);
public:
	Coordinate(int x, int y);
	//Coordinate& operator-();//���ų�Ա��������
	Coordinate& operator++();//ǰ��++
	Coordinate operator++(int);//����++,int�����Ǹ���־
	int getX();
	int getY();
protected:
private:
	int m_iX;
	int m_iY;
};