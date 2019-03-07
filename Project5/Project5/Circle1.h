#pragma once
#include "Shape1.h"
class Circle:public Shape
{
public:
	Circle(double r);
	~Circle();
	virtual double calcArea();
protected:
	double m_dR;
};