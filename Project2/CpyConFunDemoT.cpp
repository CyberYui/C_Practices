#include "CpyConFunDemo.h"
//定义默认构造函数
/*Teacher::Teacher(string name, int age)
{
	m_strName = name;
	m_iAge = age;
}
*/
//利用初始化列表定义默认构造函数

Teacher::Teacher(string name, int age):m_strName(name),m_iAge(age)
{
	cout << "Teacher(string name, int age)" << endl;
}

//定义拷贝构造函数
Teacher::Teacher(const Teacher &tea)
{
	cout << "Teacher(const Teacher &tea)" << endl;
}

//定义成员函数
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