#pragma once

#include "PersonFive.h"

class Soldier :public Person
{
public:
	Soldier(string name="David",int age=20);
	virtual ~Soldier();
	void work();
private:
	int m_iAge;
};
