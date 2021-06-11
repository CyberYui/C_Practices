#include <iostream>
#include <stdlib.h>
#include "FighterPlane7.h"
using namespace std;

/************************************************************************/
/* 接口类
		1.Flyable类,成员函数:takeoff,land
		2.Plane类,成员函数:构造函数,takeoff,land,printCode
				  数据成员:m_strCode
		3.FighterPlane类,成员函数:构造函数,takeoff,land
		4.全局函数flyMatch(Flyable *f1,Flyable *f2)
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
	//Plane *p1=new Plane("001");//两种调用方式都可以
	//Plane *p2=new Plane("002");
	p1.printCode();
	p2.printCode();

	//flyMatch(p1, p2);//若用指针则用此行
	flyMatch(&p1, &p2);

	//delete p1;
	//p1 = NULL;
	//delete p2;
	//p2 = NULL;

	system("pause");
	return 0;
}