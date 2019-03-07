/*C++  Practice  2*/
#include <iostream>
#include <stdlib.h>
using namespace std;//使用命名空间std

namespace A 
{
	int x = 1;
	void fun()
	{
		cout << "A" << endl;
		//显然，当没有使用std命名空间时，可以用std::cout之类的方式
	}
}
namespace B
{
	int x = 7;
	void fun()
	{
		cout << "B" << endl;
	}
	void fun2()
	{
		cout << "Example" << endl;
	}
}

using namespace B;//这样就可以默认用B空间的东西了，而不需要B::来确定空间
int main(void)
{
	cout << "hello" << endl;
	//访问A空间的x
	cout << A::x << endl;
	//调用B空间的fun函数
	B::fun();//cout<<B::fun()<<endl;是错误的使用方式
	//调用B空间的fun2函数
	fun2();
	system("pause");
	return 0;
}