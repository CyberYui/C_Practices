#pragma once
#include "Plane7.h"
#include <string>
using namespace std;

class FighterPlane:public Plane,public Flyable
{//¶à¼Ì³Ð
public:
	FighterPlane(string code);
	virtual void takeoff();
	virtual void land();
};
