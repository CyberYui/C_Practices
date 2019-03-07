#pragma once
#include "PersonF.h"

class Worker:public Person
{
public:
	Worker();
	~Worker();
	void work();
	int m_iSalary;

};
