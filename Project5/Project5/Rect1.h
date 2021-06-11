#pragma once
#include "Shape1.h"

class Rect:public Shape
{
public:
	Rect(double width,double height);
	~Rect();
	virtual double calcArea();
protected:
	double m_dWidth;
	double m_dHeight;
};