#include "DestructorDemo.h"

//Ĭ�Ϲ��캯��
Teacher::Teacher(string name, int age)
{
	cout << "Teacher(string name, int age)" << endl;
}
//�������캯��
Teacher::Teacher(const Teacher &tea)
{
	cout << "Teacher(const Teacher &tea)" << endl;
}
//��������,��û�в���
Teacher::~Teacher()
{
	cout << "~Teacher()" << endl;//�����
}
//������Ա����
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