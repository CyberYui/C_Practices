#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
	//定义构造函数,且是带有默认值的构造函数
	Teacher(string name = "Jim", int age = 1,int m = 5);
	//定义成员函数
	void setName(string name);
	string getName();

	void setAge(int age);
	int getAge();
	//定义一个获取常量的函数
	int getNum();
private:
	//定义成员变量
	string m_strName;
	int m_iAge;
	//定义常量,常量的默认值为5
	const int m_iMax;
};