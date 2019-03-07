#pragma once
//#ifdef SHAPE1_H
//#define SHAPE1_H
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape();
	virtual ~Shape();
	virtual double calcArea();
};
//#endif SHAPE1_H