#include "CpyConFunDemo.h"
//����Ĭ�Ϲ��캯��
/*Teacher::Teacher(string name, int age)
{
	m_strName = name;
	m_iAge = age;
}
*/
//���ó�ʼ���б���Ĭ�Ϲ��캯��

Teacher::Teacher(string name, int age):m_strName(name),m_iAge(age)
{
	cout << "Teacher(string name, int age)" << endl;
}

//���忽�����캯��
Teacher::Teacher(const Teacher &tea)
{
	cout << "Teacher(const Teacher &tea)" << endl;
}

//�����Ա����
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