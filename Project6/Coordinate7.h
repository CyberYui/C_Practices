#pragma once
#include <iostream>
using namespace std;

class Coordinate
{
	//������Ԫ��������
	friend Coordinate& operator-(Coordinate &coor);
	//�Ӻ���Ԫ��������
	friend Coordinate& operator+(Coordinate coor1, Coordinate coor2);
	//������������,����дΪ��Ԫ��������
	friend ostream &operator<<(ostream &output, Coordinate &coor);
public:
	Coordinate(int x, int y);
	//Coordinate& operator-();//���ų�Ա��������
	Coordinate& operator++();//ǰ��++
	Coordinate operator++(int);//����++,int�����Ǹ���־
	//����Demo6����,����Ϊ������
	//Coordinate& operator+(Coordinate &coor);//+�ų�Ա��������

	//�������������,����дΪ��Ա��������
	int operator[](int index);
	int getX();
	int getY();
protected:
private:
	int m_iX;
	int m_iY;
};