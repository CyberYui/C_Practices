#include "ArrayThisF.h"
#include <iostream>
using namespace std;


Array::Array(int len)
{
	this->len = len;//把this指针写在名称容易混淆的地方
	cout << "Array(int len)" << endl;
}
Array::~Array()
{
	cout << "~Array()" << endl;
}

void Array::setLen(int len)
{
	this->len = len;//把this指针写在名称容易混淆的地方
}
int Array::getLen()
{
	return this->len;//把this指针写在名称容易混淆的地方
}

//返回的*this变成了一个临时的Array对象
/*
	Array Array::printInfo()
	{
		//把this指针写在名称容易混淆的地方
		//cout << "数组的大小为:" << this->len << endl;

		//以此函数作为实验材料
		cout << "len=" << len << endl;
		return *this;
	}
*/
//再次改写printInfo函数,加一个引用符号
Array& Array::printInfo()
{
	//把this指针写在名称容易混淆的地方
	//cout << "数组的大小为:" << this->len << endl;

	//以此函数作为实验材料
	cout << "len=" << len << endl;
	//只要想要用引用的方式改写函数，就需要return *this
	return *this;
}


Array* Array::printThis()
{
	cout << "this=" << this << endl;
	//记得return this
	return this;
}