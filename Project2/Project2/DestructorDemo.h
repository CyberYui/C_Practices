#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	//Ĭ�Ϲ��캯��
	Teacher(string name = "Zark", int age = 1);
	//�������캯��
	Teacher(const Teacher &tea);
	//��������,��û�в���
	~Teacher();
	//������Ա����
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	//�����Ա����
	string m_strName;
	int m_iAge;
};