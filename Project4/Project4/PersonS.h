#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person();
	~Person();
	void eat();
//private://��������֮��ᱨ��
//	string m_strName;
//	int m_iAge;
protected:
	string m_strName;
	int m_iAge;
//private:
//	int m_iAge;
};