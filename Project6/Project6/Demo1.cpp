#include <iostream>
#include <stdlib.h>
#include "Time1.h"
#include "Match1.h"
using namespace std;

/************************************************************************/
/* ��Ԫ����
		1.��Ԫȫ�ֺ���
		2.��Ԫ��Ա����
*/
/************************************************************************/

//void printTime(Time &t);

int main(void)
{
	//������Ԫ֮�󣬴���Ķ�����Ե���˽�����ݳ�Ա
	Time t(6, 34, 25);
	Match m;
	m.printTime(t);

	system("pause");
	return 0;
}

//void printTime(Time &t)
//{
//	//��д��Ԫ�ᱨ��
//	//��Time::m_iMinute��: �޷����� private ��Ա(�ڡ�Time����������)
//	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
//}