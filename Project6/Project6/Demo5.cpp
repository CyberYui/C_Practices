#include <iostream>
#include <stdlib.h>
#include "Tank5.h"
using namespace std;

/************************************************************************/
/* ��̬���ݳ�Ա�뾲̬��Ա����
			Ҫ��:����Tank��,���ݳ�Ա:m_cCode(̹�˱��),s_iCount(̹������)
							��Ա����:���캯��,��������,fire,getCount
*/
/************************************************************************/

int main(void)
{
	cout << Tank::getCount() << endl;//��̬���ݳ�Ա�ĳ�ʼ������
	Tank t1('A');
	cout << Tank::getCount() << endl;
	cout << t1.getCount() << endl;
	cout << "****************************************" << endl;
	Tank *p = new Tank('B');
	cout << Tank::getCount() << endl;
	Tank *q = new Tank('C');
	cout << q->getCount() << endl;

	delete p;
	p = NULL;
	delete q;
	q = NULL;

	cout<< Tank::getCount() << endl;
	/*
		10			//Ĭ��ֵ10
		Tank()		//ʵ����һ��tank,����+1
		11			
		11			//�����ֲ�ͬ��ʽ�����Եõ���ͬ�Ľ��
		****************************************
		Tank()		//���е�ʵ����
		12			//����+1
		Tank()		//���е�ʵ����
		13			//����+1
		~Tank()		//ִ����������,����-1
		~Tank()		//ִ����������,����-1
		11			//������س�ʼֵ
		�밴���������. . .
	*/

	/*���ھ�̬��Ա�����޷�������const,��Ϊ��û��thisָ��*/
	/*�Ǿ�̬��Ա�������Ե��þ�̬��Ա����,��֮�򲻿���*/


	system("pause");
	return 0;
}