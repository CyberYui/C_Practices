#ifndef COORDINATESECOND_H
#define COORDINATESECOND_H

#include <iostream>
using namespace std;

class Coordinate
{
	friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
	bool operator==(Coordinate &coor);

	Coordinate(int x = 0, int y = 0);
	void printCoordinate();

private:
	int m_iX;
	int m_iY;
};


#endif
