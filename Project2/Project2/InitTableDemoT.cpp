#include "InitTableDemo.h"
//使用构造函数初始化列表，并添加常量的初始化，其中包括一个常量初始化
Teacher::Teacher(string name, int age, int m):m_strName(name),m_iAge(age),m_iMax(m)
{
	//如果在函数体写出m_iMax=m;则会报错
	cout << "Teacher(string name, int age)" << endl;
}
//定义成员函数
void Teacher::setName(string name)//函数类型要和定义一致
{
	m_strName = name;
}
string Teacher::getName()//函数类型要和定义一致
{
	return m_strName;
}

void Teacher::setAge(int age)//函数类型要和定义一致
{
	m_iAge = age;
}
int Teacher::getAge()//函数类型要和定义一致
{
	return m_iAge;
}

//定义一个获取常量的函数
int Teacher::getNum()//函数类型要和定义一致
{
	return m_iMax;
}