#include <iostream>
#include <stdlib.h>
#include "MigrantWorkerSeven.h"

/************************************************************************/
/* 多继承
		要求：1.Farmer类，数据成员：m_strName
						  成员函数：构造函数、析构函数、sow()
			  2.Worker类，数据成员：m_strCode
						  成员函数：构造函数、析构函数、carry()
			  3.MigrantWorker类，数据成员：无
								 成员函数：构造函数、析构函数
*/
/************************************************************************/

int main(void)
{
	MigrantWorker *p = new MigrantWorker("Marry", "002");
	p->carry();
	p->sow();
	delete p;
	p = NULL;
	/*运行结果
		Worker()
		Farmer()
		MigrantWorker()
		m_strCode: 002
		Worker --> carry()
		Marry
		Farmer --> sow()
		~MigrantWorker()
		~Farmer()
		~Worker
	*/

	system("pause");
	return 0;
}