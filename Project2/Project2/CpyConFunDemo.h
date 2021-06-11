#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	//定义默认函数
	Teacher(string name = "Mark", int age = 1);
	//定义拷贝构造函数
	Teacher(const Teacher &tea);
	//定义成员函数
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};