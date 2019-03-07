#include "ConFunDemo.h"
//包含头文件，这样就能让主函数调用了

//定义两个构造函数,打印函数名区分出调用的哪个函数
Teacher::Teacher()
{
	m_strName = "Jim";
	m_iAge = 30;
	cout << "Teacher()" << endl;
}
Teacher::Teacher(string name, int age)
{
	m_strName = name;
	m_iAge = age;
	cout << "Teacher(string name, int age)" << endl;
}


//这里写好了ConFunDemo.h中声明的函数的函数体
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