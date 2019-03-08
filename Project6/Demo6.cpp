#include "Coordinate6.h"
#include <iostream>
using namespace std;

/************************************************************************/
/* 运算符重载----一元运算符重载
		要求:定义Coordinate坐标类.成员函数:构造函数,getX,getY
								  数据成员:m_iX,m_iY
			1.负号运算符重载(成员函数重载,友元函数重载)
			2.++运算符重载(前置++,后置++)
*/
/************************************************************************/

int main(void)
{
	Coordinate coor1(1, 3);
	cout << coor1.getX() << "," << coor1.getY() << endl;
	//先用成员函数重载,记得注释掉友元函数重载
	//-coor1;//coor1.operator-();
	//cout << coor1.getX() << "," << coor1.getY() << endl;//对比前后结果
	////用这样的引用方式是有好处的
	////取两次负号
	//-coor1;//或者修改上面的-coor1为-(-coor1)
	//cout << coor1.getX() << "," << coor1.getY() << endl;//对比前后结果
	////结果变为了正


	//再用友元函数重载,记得注释掉成员函数重载,之后的内容同样
	-coor1;//operator-(coor1);
	cout << coor1.getX() << "," << coor1.getY() << endl;
	-coor1;
	cout << coor1.getX() << "," << coor1.getY() << endl;
	//结果也是没有问题

	cout << "***************************************" << endl;
	//前置++和后置++
	Coordinate coor2(5, 7);
	Coordinate coor3(5, 7);
	++coor2;//前置++是先加再传值
	cout << coor2.getX() << "," << coor2.getY() << endl;
	coor3++;//后置++是先传值再加
	cout << coor3.getX() << "," << coor3.getY() << endl;
	cout << "***************************************" << endl;

	//以下用于测试
	//首先看前置++和后置++的传值
	Coordinate coor4(1, 1);
	Coordinate coor5(1, 1);
	cout << (++coor4).getX() << endl;//前置++若值变化,则证明是先加后输出
	cout << (coor5++).getX() << endl;//后置++,对比前置++即可得到结果
	/*可见,前置是先加再输出,后置是先输出再传值
	***************************************
				2
				1
	*/
	//此时coor4(2,2)   coor5(2,2)
	cout << "***************************************" << endl;
	//测试前置++和后置++若直接输出会是什么结果
	cout << (++coor4).getX() << "," << coor4.getY() << endl;
	cout << (coor5++).getX() << "," << coor5.getY() << endl;
	/*可见输出y仍然是++之前的值,即只有此行输出执行完之后才会是coor4(3,3)   coor5(3,3)
				3,2
				2,2
	*/
	//直接输出查看结果
	cout << coor4.getX() << "," << coor4.getY() << endl;
	cout << coor5.getX() << "," << coor5.getY() << endl;
	/*可见此时才能输出正确的结果
				3,3
				3,3
	*/
	//结论:前置先加后赋值,输出赋值后内容
	//     后置先赋值后加,输出赋值的内容
	//     若同行前后置++,输出加之前的值

	//前置--和后置--类似于前置++和后置++

	system("pause");
	return 0;
}