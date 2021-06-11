#include "Tank5.h"
#include <iostream>
using namespace std;

int Tank::s_iCount = 10;

Tank::Tank(char code)
{
	m_cCode = code;
	s_iCount++;
	cout << "Tank()" << endl;
}

Tank::~Tank()
{
	s_iCount--;
	cout << "~Tank()" << endl;
}

void Tank::fire()
{
	getCount();//�ڳ�Ա��������Ӿ�̬��Ա�������ã��ǿ��е�
	cout << "Tank --> fire()" << endl;
}

int Tank::getCount()//����Ҫ��static�ؼ���
{
	//�ھ�̬��Ա�����е�����ͨ��Ա����,�ǷǷ���
	//fire();//error C2352: ��Tank::fire��: �Ǿ�̬��Ա�����ķǷ�����
	//m_cCode = 'C';//error C2597: �ԷǾ�̬��Ա��Tank::m_cCode���ķǷ�����
	return s_iCount;
}