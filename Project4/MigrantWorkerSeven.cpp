#include "MigrantWorkerSeven.h"
#include <iostream>
using namespace std;

//在构造函数传值时用新方法
MigrantWorker::MigrantWorker(string name, string code) :Farmer(name), Worker(code)
//将参数name传给Farmer，code传给Worker
{
	cout << "MigrantWorker()" << endl;
}

MigrantWorker::~MigrantWorker()
{
	cout << "~MigrantWorker()" << endl;
}