#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person();
	~Person();
	void eat();
//private://这样设置之后会报错
//	string m_strName;
//	int m_iAge;
protected:
	string m_strName;
	int m_iAge;
//private:
//	int m_iAge;
};