#pragma once
#include "Person5.h"
class Worker:public Person
{//�̳��ڳ�����
public:
	Worker(string name,int age);
	//work�����Ǳ��̳�������

	//virtual void work();//��������ʵ�֣���ҲΪ������

private:
	int m_iAge;
};