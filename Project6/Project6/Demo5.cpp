#include <iostream>
#include <stdlib.h>
#include "Tank5.h"
using namespace std;

/************************************************************************/
/* 静态数据成员与静态成员函数
			要求:定义Tank类,数据成员:m_cCode(坦克编号),s_iCount(坦克数量)
							成员函数:构造函数,析构函数,fire,getCount
*/
/************************************************************************/

int main(void)
{
	cout << Tank::getCount() << endl;//静态数据成员的初始化内容
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
		10			//默认值10
		Tank()		//实例化一个tank,数量+1
		11			
		11			//用两种不同方式都可以得到相同的结果
		****************************************
		Tank()		//堆中的实例化
		12			//数量+1
		Tank()		//堆中的实例化
		13			//数量+1
		~Tank()		//执行析构函数,数量-1
		~Tank()		//执行析构函数,数量-1
		11			//数量变回初始值
		请按任意键继续. . .
	*/

	/*对于静态成员函数无法在其后加const,因为它没有this指针*/
	/*非静态成员函数可以调用静态成员函数,反之则不可以*/


	system("pause");
	return 0;
}