#include "Coordinate7.h"
#include <iostream>
using namespace std;

/************************************************************************/
/* 运算符重载 ---- 二元运算符重载
		要求:定义Coordinate坐标类
			成员函数:构造函数,getX,getY
			数据成员:m_iX,m_iY
		1.+号运算符重载(成员函数,友元函数)
		2.<<输出运算符重载
		3.[]索引运算符重载
*/
/************************************************************************/

int main(void)
{
	Coordinate coor1(1, 3);
	Coordinate coor2(0, 4);
	Coordinate coor3(0, 0);

	coor3 = coor2 + coor1;
	//cout << coor3.getX() << "," << coor3.getY() << enld;
	cout << coor3 << endl;//效果与上句一样

	//索引运算符重载内容
	cout << coor3[0] << endl;
	cout << coor3[1] << endl;

	system("pause");
	return 0;
}