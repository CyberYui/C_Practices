//����ʵ��ͬ��ͷ�ļ��ڵĺ���
#include "CoordinateSecond.h"
//����Ҫʹ��cout����������iostream��namespace std
#include <iostream>
using namespace std;

//���캯������������
//�����������һ��Ĭ�ϵĹ��캯�����ǾͲ���Ҫ��Line�Ĺ��캯���г�ʼ���б�
//Coordinate::Coordinate()
//���������������Ҫ�в������룬�ͱ���Ҫʹ�ó�ʼ���б�ķ�ʽ��ֵ����Line�Ĺ��캯��
Coordinate::Coordinate(int x,int y)
{
	m_iX = x;
	m_iY = y;
	//cout << "Coordinate()" << endl;
	//Ϊ�˱������ȹ���A�����ȹ���B��Ҫ�޸�һ�����,������꼴�ɱ��
	cout << "Coordinate()    (" << m_iX << "," << m_iY << ")" << endl;
}
Coordinate::~Coordinate()
{
	//cout << "~Coordinate()" << endl;
	//Ϊ�˱�����������A����������B��Ҫ�޸�һ�����,������꼴�ɱ��
	cout << "~Coordinate()    (" << m_iX << "," << m_iY << ")" << endl;
}

//����������ݷ�װ����
void Coordinate::setX(int x)
{
	m_iX = x;
}
int Coordinate::getX()
{
	return m_iX;
}
//����������ݷ�װ����
void Coordinate::setY(int y)
{
	m_iY = y;
}
int Coordinate::getY()
{
	return m_iY;
}
