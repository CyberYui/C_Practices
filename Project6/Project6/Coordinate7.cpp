#include "Coordinate7.h"
#include <ostream>
#include <string>
using namespace std;

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

//���ų�Ա��������
//Coordinate &/*����õ�������*/Coordinate::operator-()
//{
//	//this->m_iX=-(this->m_iX);
//	//this->m_iY=-(this->m_iY);	
//	//���ַ�ʽ������ͬ
//	m_iX = -m_iX;
//	m_iY = -m_iY;
//	return *this;
//	//���ں������õ�������,���Խ���ǰ�Ķ��󷵻�,��*thisָ����,ֻ��thisָָ��
//}

//������Ԫ��������
Coordinate &operator-(Coordinate &coor)/*��Ԫ������һ�����еĺ���*/
{
	//this->m_iX=-(this->m_iX);
	//this->m_iY=-(this->m_iY);	
	//���ַ�ʽ������ͬ
	coor.m_iX = -coor.m_iX;
	coor.m_iY = -coor.m_iY;
	return coor;
	//���ں������õ�������,���Խ���ǰ�Ķ��󷵻�,��*thisָ����,ֻ��thisָָ��
}

//�Ӻų�Ա��������
//Coordinate& Coordinate::operator+(Coordinate &coor)
//{
//	Coordinate temp(1, 1);
//	temp.m_iX = this->m_iX + coor.m_iX;
//	temp.m_iY = this->m_iY + coor.m_iY;
//	return temp;
//}

//�Ӻ���Ԫ��������
Coordinate& operator+(Coordinate coor1, Coordinate coor2)
{
	Coordinate temp(0,0);
	temp.m_iX = coor1.m_iX + coor2.m_iX;
	temp.m_iY = coor1.m_iY + coor2.m_iY;
	return temp;
}

//������������
ostream &operator<<(ostream &output, Coordinate &coor)
{
	output << coor.m_iX << "," << coor.m_iY ;
	return output;
}

//�������������
int Coordinate::operator[](int index)
{
	if (0==index)
	{
		return m_iX;
	}
	if (1==index)
	{
		return m_iY;
	}
	else
	{
		throw string("ivalid index!");
		return 0;
	}
}

Coordinate &Coordinate::operator++()//ǰ��++
{
	m_iX++;
	m_iY++;
	return *this;
}

Coordinate Coordinate::operator++(int)//����++
{
	Coordinate old(*this);//��������old
	m_iX++;
	m_iY++;
	return old;//��ʱreturn��oldʵ����ֵ�ı仯
}