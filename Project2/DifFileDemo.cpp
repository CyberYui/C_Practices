/***************************************************************/
/*	  ����һ��Teacher�࣬Ҫ��ֱ����ͬ�ļ����ⶨ��ͷ��ļ�����*/
/*����ķ�ʽ��ɣ�����Ҫ�����£�                               */
/*		���ݳ�Ա��                                             */
/*              ����                                           */
/*              ����                                           */
/*              �Ա�                                           */
/*		��Ա������                                             */
/*              ���ݳ�Ա�ķ�װ����                             */
/*              �ڿ�teach����                                  */
/***************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string>
#include "DifFileDemo.h"//������Ӧͷ�ļ�
using namespace std;


//����ͷ�ļ���������س�Ա����
void Teacher::setName(string _name)
{
	m_strName = _name;
}
string Teacher::getName()
{
	return m_strName;
}

void Teacher::setGender(string _gender)
{
	m_strGender = _gender;
}
string Teacher::getGender()
{
	return m_strGender;
}

void Teacher::setAge(int _age)
{
	m_iAge = _age;
}
int Teacher::getAge()
{
	return m_iAge;
}

void Teacher::teach()
{
	cout << "��ʼ�ڿ�" << endl;
}

int main(void)
{
	Teacher t;//ʵ����ջ����
	//Teacher *t = new Teacher();//ʵ�����Ѷ���
	t.setName("����");
	t.setGender("��");
	t.setAge(30);
	cout << t.getName() << " " << t.getAge() << " " << t.getGender();
	t.teach();

	system("pause");
	//�ͷ��ڴ�
	//delete t;
	//t=NULL;
	return 0;
}