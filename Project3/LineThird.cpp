#include "LineThird.h"
#include <iostream>
using namespace std;

Line::Line(int x1, int y1, int x2, int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{
	cout << "Line() start" << endl;
	//���ڶ����Ա��Ҫ�õ���ʼ���б�
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
	cout << "������ͨ��Ա����printInfo()�Ľ��" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
	cout << "������ͨ��Ա�����Ľ�β��" << endl;
}
//�����벻������ͬ���ĳ���Ա��������ͨ��Ա������Ϊ����
void Line::printInfo() const
{
	cout << "���ǳ���Ա����printInfo() const�Ľ����" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
	cout << "���ǳ���Ա�����Ľ�β��" << endl;
}