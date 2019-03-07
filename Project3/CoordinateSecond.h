#pragma once
//由于Coordinate头文件是最底层的
//并且函数只声明而已，所以不用导入其他头文件
//由于未使用cout，string等命令，所以也不用导入系统文件
class Coordinate
{
public:
	//Coordinate();
	//改造构造函数
	Coordinate(int x, int y);
	~Coordinate();

	void setX(int x);
	int getX();
	
	void setY(int y);
	int getY();
	
private:
	int m_iX;
	int m_iY;
};