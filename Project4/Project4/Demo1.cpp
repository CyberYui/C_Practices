/*�̳�
Ҫ��
	1.����Person��,Ҫ����m_strName��m_iAge�������ݳ�Ա
		���캯������������,eat����
	2.����Worker�࣬Ҫ���м̳�Person��,�������ݳ�Աm_iSalary
		���캯������������,work����
*/

#include <iostream>
#include <stdlib.h>
#include "WorkerF.h"

using namespace std;

int main(void)
{
	Worker *worker1 = new Worker;
	worker1->m_strName = "Jim";
	worker1->m_iAge = 10;
	worker1->eat();
	worker1->m_iSalary = 4000;
	worker1->work();
	delete worker1;
	worker1 = NULL;

	system("pause");
	return 0;
}
/*
	Person()		
	Worker()
	eat()
	work()
	~Worker()
	~Person()
*/