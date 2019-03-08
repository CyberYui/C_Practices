#pragma once
#include <string>
#include "Flyable8.h"
using namespace std;

class Plane:public Flyable
{
public:
	void carry();
	virtual void takeoff();
	virtual void land();
private:

};
