#pragma once
#include "PersonT.h"

//Part1 用public继承
//class Soldier:public Person
//Part2 改为protected继承
//class Soldier:protected Person
//Part3 改为private继承
class Soldier :private Person
{
public:
	Soldier();
	void work();
protected:
	int m_iAge;
private:
};