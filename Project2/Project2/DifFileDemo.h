#pragma once
//先包含相应的文件和命名空间
#include <string>
using namespace std;
//头文件内定义Teacher类
class Teacher
{
public:
	//开始声明函数，函数体写在类外
	void setName(string _name);
	string getName();

	void setGender(string _gender);
	string getGender();

	void setAge(int _age);
	int getAge();
	//教学函数
	void teach();

private:
	string m_strName;	//姓名
	string m_strGender;	//性别
	int m_iAge;			//年龄
};
	