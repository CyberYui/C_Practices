#include "PersonFive.h"//双引号搜索同目录头文件
//#include <PersonFourth.h>这样的写法搜索的是程序的默认库
#include <iostream>
using namespace std;

Person::Person(string name)
{
	m_strName = name;
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::play()
{
	cout << "Person --> play()" << endl;
	cout << m_strName << endl;
}