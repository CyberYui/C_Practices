#include "Shape2.h"

Shape::Shape()
{
	cout << "Shape()" << endl;
}

Shape::~Shape()
{
	cout << "~Shape()" << endl;
}

double Shape::calcArea()
{
	cout << "Shape() --> calcArea()" << endl;
	return 0;
}