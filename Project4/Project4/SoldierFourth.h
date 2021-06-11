#pragma once

#include "PersonFourth.h"

class Soldier:public Person
{
public:
	Soldier();
	void play();
	void play(int x);
	void work();
private:
	string m_strName;
};