#pragma once
//�Ȱ�����Ӧ���ļ��������ռ�
#include <string>
using namespace std;
//ͷ�ļ��ڶ���Teacher��
class Teacher
{
public:
	//��ʼ����������������д������
	void setName(string _name);
	string getName();

	void setGender(string _gender);
	string getGender();

	void setAge(int _age);
	int getAge();
	//��ѧ����
	void teach();

private:
	string m_strName;	//����
	string m_strGender;	//�Ա�
	int m_iAge;			//����
};
	