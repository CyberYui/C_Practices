#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	//���幹�캯��,���Ǵ���Ĭ��ֵ�Ĺ��캯��
	Teacher(string name = "Jim", int age = 1,int m = 5);
	//�����Ա����
	void setName(string name);
	string getName();

	void setAge(int age);
	int getAge();
	//����һ����ȡ�����ĺ���
	int getNum();
private:
	//�����Ա����
	string m_strName;
	int m_iAge;
	//���峣��,������Ĭ��ֵΪ5
	const int m_iMax;
};