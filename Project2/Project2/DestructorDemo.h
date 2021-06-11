#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	//默认构造函数
	Teacher(string name = "Zark", int age = 1);
	//拷贝构造函数
	Teacher(const Teacher &tea);
	//析构函数,它没有参数
	~Teacher();
	//声明成员函数
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	//定义成员变量
	string m_strName;
	int m_iAge;
};