#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	//����Ĭ�Ϻ���
	Teacher(string name = "Mark", int age = 1);
	//���忽�����캯��
	Teacher(const Teacher &tea);
	//�����Ա����
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};