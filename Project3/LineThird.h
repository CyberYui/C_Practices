#pragma once
#include "CoordinateThird.h"

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);//记得要初始化A和B，不然两个点只有默认值
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	//常成员函数和普通成员函数的重载
	void printInfo();
	void printInfo() const;
private:
	//把A点定义为常对象成员
	//对象成员的赋值是需要初始化列表的
	const Coordinate m_coorA;
	Coordinate m_coorB;
};