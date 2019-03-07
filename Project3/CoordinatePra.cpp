/************************************************************************/
/* 对象成员：                                                           */
/*     要求：                                                           */
/*         定义两个类：                                                 */
/*             坐标类：Coordinate                                       */
/*                 数据成员：横坐标m_iX                                 */
/*                           纵坐标m_iY								    */
/*                 成员函数：构造函数、析构函数、数据封装函数           */
/*                                                                      */
/*             线段类：Line                                             */
/*                 数据成员：点A m_coorA                                */
/*                           点B m_coorB                                */
/*                 成员函数：构造函数、析构函数、						*/
/*                           数据封装函数、信息打印函数                 */
/************************************************************************/


#include <iostream>
#include <stdlib.h>
#include "LinePra.h"
using namespace std;

int main(void)
{
	//Plan A
	//声明一个Line的指针p,接着就销毁掉，看看函数调用顺序
	//Line *p = new Line();
	//delete p;
	//p = NULL;
	/*看顺序,可以看出是后进先出
		Coordinate()	//先调用两次坐标类构造函数
		Coordinate()
		Line()			//调用一次线段类的构造函数
		~Line()			//销毁线段对象
		~Coordinate()	//销毁坐标对象
		~Coordinate()
	*/
	//Plan A end;

	//作为一个线段，我们希望创建时就把里面的点也确定下来
	//这就需要改造一些函数了
	//改造顺序1.CoordinateSecond.h    2.CoordinateSecond.cpp    内容:构造函数
	//		  3.CoordinateSecond.cpp中构造函数和析构函数的输出
	//		  4.LinePra.h       5.LinePra.cpp       内容:构造函数
	//Line的构造函数是不用改变输出的，因为Line就创建了一个
	
	//Plan B
	Line *p = new Line(1,2,3,4);
	//在这里可以调用一下Line的输出函数
	p->printInfo();

	delete p;
	p = NULL;
	/*看顺序,更易看出是后进先出
		Coordinate()    (1,2)	//实例化了A
		Coordinate()    (3,4)	//实例化了B
		Line()
		~Line()
		~Coordinate()    (3,4)	//销毁了B
		~Coordinate()    (1,2)	//销毁了A
	*/
	system("pause");
	return 0;
}