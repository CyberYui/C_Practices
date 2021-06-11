#include "Tank5.h"
#include <iostream>
using namespace std;

int Tank::s_iCount = 10;

Tank::Tank(char code)
{
	m_cCode = code;
	s_iCount++;
	cout << "Tank()" << endl;
}

Tank::~Tank()
{
	s_iCount--;
	cout << "~Tank()" << endl;
}

void Tank::fire()
{
	getCount();//在成员函数中添加静态成员函数调用，是可行的
	cout << "Tank --> fire()" << endl;
}

int Tank::getCount()//不需要加static关键字
{
	//在静态成员函数中调用普通成员函数,是非法的
	//fire();//error C2352: “Tank::fire”: 非静态成员函数的非法调用
	//m_cCode = 'C';//error C2597: 对非静态成员“Tank::m_cCode”的非法引用
	return s_iCount;
}