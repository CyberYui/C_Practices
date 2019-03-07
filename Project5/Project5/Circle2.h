#pragma once
#include "Shape2.h"
#include "Coordinate2.h"

class Circle :public Shape
{
public:
	Circle(double r);
	virtual ~Circle();
	virtual double calcArea();
protected:
	double m_dR;
	Coordinate *m_pCenter;
};