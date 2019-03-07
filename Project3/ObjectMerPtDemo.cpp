#include <iostream>
#include <stdlib.h>
#include "ObMrPtLine.h"
using namespace std;

/************************************************************************/
/* �����Աָ��		                                                    */
/*         Ҫ��                                                       */
/*             ���������ࣺ                                             */
/*                 �����ࣺCoordinate						            */
/*                 ���ݳ�Ա��������m_iX��������m_iY				        */
/*                 ��Ա���������캯�����������������ݷ�װ����	        */
/*                 �߶��ࣺLine	                                        */
/*                 ���ݳ�Ա����Aָ�� m_pCoorA����Bָ�� m_pCoorB         */
/*                 ��Ա���������캯����������������Ϣ��ӡ����           */
/************************************************************************/


int main(void)
{
	Line *p = new Line(1, 2, 2, 3);
	p->printInfo();
	delete p;
	p = NULL;

	//���ָ��Ĵ�С
	cout << sizeof(p) << endl;
	cout << sizeof(Line) << endl;

	system("pause");
	return 0;
}

/*
Coordinate()   (1,2)
Coordinate()   (2,3)
Line()
printInfo()					//printInfo��������
(1,2)
(2,3)
~Coordinate()  (1,2)		//���ﶼ����������
~Coordinate()  (2,3)
~Line()
4							//p�Ĵ�С
8							//Line�Ĵ�С
*/