//����ʵ��ͬ��ͷ�ļ��ڵĺ���
#include "LinePra.h"
//����Ҫʹ��cout����������iostream��namespace std
#include <iostream>
using namespace std;

//���캯������������
//Line::Line()
//Line���м���������Ҫ��ʼ���б�
Line::Line(int x1, int y1, int x2, int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{//��ע���ʼ���б��е�д��m_coorA(x1,y1)��û��m_coorA.XXXX������д��
	cout << "Line()" << endl;
}
Line::~Line()
{
	cout << "~Line()" << endl;
}

//ʵ��A������÷���
void Line::setA(int x, int y)
{
	m_coorA.setX(x);
	m_coorA.setY(y);
}
//ʵ��B������÷���
void Line::setB(int x, int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
}

//��Ϣ�Ĵ�ӡ����
void Line::printInfo()
{
	cout << "A:(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "B:(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
}