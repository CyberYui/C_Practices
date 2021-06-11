#include <iostream>
#include <stdlib.h>
#include "ObMrPtLine.h"
using namespace std;

/************************************************************************/
/* 对象成员指针		                                                    */
/*         要求：                                                       */
/*             定义两个类：                                             */
/*                 坐标类：Coordinate						            */
/*                 数据成员：横坐标m_iX，纵坐标m_iY				        */
/*                 成员函数：构造函数、析构函数、数据封装函数	        */
/*                 线段类：Line	                                        */
/*                 数据成员：点A指针 m_pCoorA，点B指针 m_pCoorB         */
/*                 成员函数：构造函数、析构函数、信息打印函数           */
/************************************************************************/


int main(void)
{
	Line *p = new Line(1, 2, 2, 3);
	p->printInfo();
	delete p;
	p = NULL;

	//输出指针的大小
	cout << sizeof(p) << endl;
	cout << sizeof(Line) << endl;

	system("pause");
	return 0;
}

/*
Coordinate()   (1,2)
Coordinate()   (2,3)
Line()
printInfo()					//printInfo函数运行
(1,2)
(2,3)
~Coordinate()  (1,2)		//这里都是析构函数
~Coordinate()  (2,3)
~Line()
4							//p的大小
8							//Line的大小
*/