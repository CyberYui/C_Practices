#pragma once
//Line的头文件是中间容器，所以需要导入底层头文件
#include "CoordinateSecond.h"
//由于未使用cout，string等命令，所以不用导入系统文件

class Line
{
public:
	//Line();
	//改造构造函数
	Line(int x1, int y1, int x2, int y2);//这里只声明，别把初始化列表写这里了
	~Line();

	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();//用于打印信息的函数

private:
	//Line的数据成员是点，是对象成员
	Coordinate m_coorA;
	Coordinate m_coorB;
};