#include "Dustman5.h"
#include <iostream>
using namespace std;

Dustman::Dustman(string name,int age):Worker(name,age)
{}

void Dustman::work()
{//至此，完成了实现，抽象被取消
	cout << "扫地" << endl;
}