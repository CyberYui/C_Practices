#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person(string name="Cyber");
	//~Person();这个析构函数并不能满足基类子类析构函数全执行
	//虚析构函数
	virtual ~Person();//virtual是可以被继承的
	void play();
protected:
	string m_strName;
private:
};