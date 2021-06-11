#pragma once
#include "Flyable8.h"
#include <string>
using namespace std;

class Bird:public Flyable
{
public:
	void foraging();
	/*virtual void takeoff();
	virtual void land();*/
	void takeoff();
	void land();
};
