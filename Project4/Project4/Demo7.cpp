#include <iostream>
#include <stdlib.h>
#include "MigrantWorkerSeven.h"

/************************************************************************/
/* ��̳�
		Ҫ��1.Farmer�࣬���ݳ�Ա��m_strName
						  ��Ա���������캯��������������sow()
			  2.Worker�࣬���ݳ�Ա��m_strCode
						  ��Ա���������캯��������������carry()
			  3.MigrantWorker�࣬���ݳ�Ա����
								 ��Ա���������캯������������
*/
/************************************************************************/

int main(void)
{
	MigrantWorker *p = new MigrantWorker("Marry", "002");
	p->carry();
	p->sow();
	delete p;
	p = NULL;
	/*���н��
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