#include <iostream>
#include <stdlib.h>
#include "FighterPlane7.h"
using namespace std;

/************************************************************************/
/* �ӿ���
		1.Flyable��,��Ա����:takeoff,land
		2.Plane��,��Ա����:���캯��,takeoff,land,printCode
				  ���ݳ�Ա:m_strCode
		3.FighterPlane��,��Ա����:���캯��,takeoff,land
		4.ȫ�ֺ���flyMatch(Flyable *f1,Flyable *f2)
*/
/************************************************************************/

void flyMatch(Flyable *f1, Flyable *f2)
{
	f1->land();
	f1->takeoff();
	f2->land();
	f2->takeoff();
}

int main(void)
{
	//Plane p1("001");
	//Plane p2("002");
	FighterPlane p1("001");
	FighterPlane p2("002");
	//Plane *p1=new Plane("001");//���ֵ��÷�ʽ������
	//Plane *p2=new Plane("002");
	p1.printCode();
	p2.printCode();

	//flyMatch(p1, p2);//����ָ�����ô���
	flyMatch(&p1, &p2);

	//delete p1;
	//p1 = NULL;
	//delete p2;
	//p2 = NULL;

	system("pause");
	return 0;
}