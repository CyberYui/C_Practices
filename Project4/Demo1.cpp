/*继承
要求：
	1.定义Person类,要求含有m_strName和m_iAge两个数据成员
		构造函数和析构函数,eat函数
	2.定义Worker类，要求公有继承Person类,含有数据成员m_iSalary
		构造函数和析构函数,work函数
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