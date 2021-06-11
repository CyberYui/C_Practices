#include <iostream>
#include <stdlib.h>
using namespace std;

//定义一个坐标类：
//数据成员：x和y
//成员函数：分别打印x和y的值
class Coordinate 
{	//从类名就能看出类的功能
	//coordinate vt.使调和，使协调，搭配，整合
	public:
		int x;
		int y;
		void printX()
		{
			cout << "x:" << x << endl;
		}
		void printY()
		{
			cout << "y:" << y << endl;
		}
};

int main(void)
{
	Coordinate coor;//实例化栈对象
	coor.x = 10;//给对象的x和y分别赋值
	coor.y = 20;
	coor.printX();
	coor.printY();

	Coordinate *p = new Coordinate();//实例化堆对象
	if (NULL == p)//判断申请内存是否成功
	{
		//failed
		return 0;
	}
	p->x = 100;//给对象的x和y分别赋值
	p->y = 200;
	p->printX();
	p->printY();

	system("pause");
	delete p;//释放内存
	p = NULL;//收刀入鞘

	return 0;
}