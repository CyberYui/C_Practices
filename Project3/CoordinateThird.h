#pragma once
class Coordinate
{
public:
	Coordinate(int x = 5, int y = 6);
	~Coordinate();
	//这样的函数是无法操作常成员变量的
	//解决方式就是使用常成员函数
	//但是set方法是必须操作自己的变量的，常成员函数就不能操作了
	void setX(int x);
	//因此，修改成常成员函数的应该是get方法
	int getX(/* const Coordinate *this */) const;//其实就是内层注释的意思
	//const写在函数声明的后面，就变成常成员函数了
	//记得要声明和实现同步进行
	void setY(int y);
	int getY() const;
	//const写在函数声明的后面，就变成常成员函数了
	//记得要声明和实现同步进行
private:
	int m_iX;
	int m_iY;
};