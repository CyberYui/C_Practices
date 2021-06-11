#pragma once

#include <string>
#include "Flyable7.h"
using namespace std;

class Plane//:public Flyable
{
public:
	Plane(string code);
	//virtual void takeoff();
	//virtual void land();
	void printCode();
private:
	string m_strCode;
};