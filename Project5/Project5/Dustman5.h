#pragma once
#include "Worker5.h"
class Dustman:public Worker
{
public:
	Dustman(string name,int age);
	virtual void work();
};