/*单元巩固

定义一个坐标类，
在栈上实例化坐标类常对象，
并给出坐标（3，5），
然后定义常引用、常指针，
最后使用对象、引用、指针分别通过调用信息打印函数打印坐标信息。

打印结果如下
			(3,5)
			(3,5)
			(3,5)
*/
	#include <iostream>
	#include <stdlib.h>
	using namespace std;

	//先定义类
	class Coordinate
	{
	public:
		Coordinate(int x, int y)
		{
			//设置x和y
			m_iX = x;
			m_iY = y;
		}
		//实现常成员函数
		void printInfo() const
		{
			cout << "(" << m_iX << "," << m_iY << ")" << endl;
		}
	private:
		int m_iX;
		int m_iY;
	};

	int main(void)
	{
		const Coordinate coor(3, 5);
		//创建常指针p
		const Coordinate *p = &coor;
		//创建常引用c
		const Coordinate &c = coor;

		coor.printInfo();
		p->printInfo();
		c.printInfo();

		system("pause");
		return 0;
	}