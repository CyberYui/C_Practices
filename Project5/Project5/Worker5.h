#pragma once
#include "Person5.h"
class Worker:public Person
{//继承于抽象类
public:
	Worker(string name,int age);
	//work函数是被继承下来的

	//virtual void work();//函数若无实现，则也为抽象类

private:
	int m_iAge;
};