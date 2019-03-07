#include "DestructorDemo.h"

//默认构造函数
Teacher::Teacher(string name, int age)
{
	cout << "Teacher(string name, int age)" << endl;
}
//拷贝构造函数
Teacher::Teacher(const Teacher &tea)
{
	cout << "Teacher(const Teacher &tea)" << endl;
}
//析构函数,它没有参数
Teacher::~Teacher()
{
	cout << "~Teacher()" << endl;//做标记
}
//声明成员函数
void Teacher::setName(string name)
{
	m_strName = name;
}
string Teacher::getName()
{
	return m_strName;
}

void Teacher::setAge(int age)
{
	m_iAge = age;
}
int Teacher::getAge()
{
	return m_iAge;
}