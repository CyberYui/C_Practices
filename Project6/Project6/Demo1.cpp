#include <iostream>
#include <stdlib.h>
#include "Time1.h"
#include "Match1.h"
using namespace std;

/************************************************************************/
/* 友元函数
		1.友元全局函数
		2.友元成员函数
*/
/************************************************************************/

//void printTime(Time &t);

int main(void)
{
	//声明友元之后，传入的对象可以调用私有数据成员
	Time t(6, 34, 25);
	Match m;
	m.printTime(t);

	system("pause");
	return 0;
}

//void printTime(Time &t)
//{
//	//不写友元会报错
//	//“Time::m_iMinute”: 无法访问 private 成员(在“Time”类中声明)
//	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
//}