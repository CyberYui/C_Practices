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

//��Ա��������
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