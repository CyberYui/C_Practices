#include "InitTableDemo.h"
//ʹ�ù��캯����ʼ���б�����ӳ����ĳ�ʼ�������а���һ��������ʼ��
Teacher::Teacher(string name, int age, int m):m_strName(name),m_iAge(age),m_iMax(m)
{
	//����ں�����д��m_iMax=m;��ᱨ��
	cout << "Teacher(string name, int age)" << endl;
}
//�����Ա����
void Teacher::setName(string name)//��������Ҫ�Ͷ���һ��
{
	m_strName = name;
}
string Teacher::getName()//��������Ҫ�Ͷ���һ��
{
	return m_strName;
}

void Teacher::setAge(int age)//��������Ҫ�Ͷ���һ��
{
	m_iAge = age;
}
int Teacher::getAge()//��������Ҫ�Ͷ���һ��
{
	return m_iAge;
}

//����һ����ȡ�����ĺ���
int Teacher::getNum()//��������Ҫ�Ͷ���һ��
{
	return m_iMax;
}