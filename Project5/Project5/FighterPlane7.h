#pragma once
#include "Plane7.h"
#include <string>
using namespace std;

class FighterPlane:public Plane,public Flyable
{//��̳�
public:
	FighterPlane(string code);
	virtual void takeoff();
	virtual void land();
};
