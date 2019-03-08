#include <iostream>
#include <stdlib.h>
#include "IndexException10.h"
using namespace std;

/************************************************************************/
/* 异常处理:
		1.定义一个Exception类,成员函数:printException,析构函数
		2.定义一个IndexException类,成员函数:printException
*/
/************************************************************************/

//建立一个简单的函数抛出异常
void test()
{
	//throw 10;
	//throw 0.1;//一般来说抛出的是一个错误编号
	//throw IndexException();
	throw "wa!";
}

int main(void)
{
	//通过try+catch形成异常处理
	try
	{
		test();
	}
	catch (int)
	{
		cout << "int Exception!" << endl;
	}
	catch (double &e)//异常的&e是可以随便起名的，注意关键字即可
	{
		cout << e << endl;//这样能直接打印出0.1的值
	}
	catch (IndexException &e)//或者catch (Exception &e)也是可以的
	{
		e.printException();
	}
	catch (...)//最后的挣扎
	{
		cout << "崩溃啦！" << endl;
	}

	system("pause");
	return 0;
}