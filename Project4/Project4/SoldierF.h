#pragma once
#include "PersonT.h"

//Part1 ��public�̳�
//class Soldier:public Person
//Part2 ��Ϊprotected�̳�
//class Soldier:protected Person
//Part3 ��Ϊprivate�̳�
class Soldier :private Person
{
public:
	Soldier();
	void work();
protected:
	int m_iAge;
private:
};