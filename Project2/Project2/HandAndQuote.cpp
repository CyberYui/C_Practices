#include <iostream>
#include <stdlib.h>
using namespace std;

/*示例B的结构体
typedef struct
{				//定义一个结构体
	int x;
	int y;
}Coord;
*/


int main(void)
{
	/*示例A：关于引用的例子
	int a = 10;
	int &b = a;			//b就成了a的一个别名

	b = 20;				//给别名赋值
	cout << a << endl;	//给b赋值后打印a
	a = 30;				//给本体赋值
	cout << b << endl;	//给a赋值后打印b
	//上面四行代码展示了b和a其实是一个东西的结果
	*/

	/*示例B：关于结构体引用的例子
	Coord c;							//定义一个结构体c
	Coord &c1 = c;						//给c起别名c1

	c1.x = 10;							//给c1的x和y赋值
	c1.y = 20;

	cout << c.x << "," << c.y << endl;	//输出c的x和y，可见c和c1是一个东西
	*/
	
	int a = 3;
	int *p = &a;		//指针p指向a
	int *&q = p;		//给指针p定别名q

	*q = 5;				//利用q访问a
	cout << a << endl;	//输出a看是否a被变值

	system("pause");
	return 0;
}