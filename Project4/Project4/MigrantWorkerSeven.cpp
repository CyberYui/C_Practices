#include "MigrantWorkerSeven.h"
#include <iostream>
using namespace std;

//�ڹ��캯����ֵʱ���·���
MigrantWorker::MigrantWorker(string name, string code) :Farmer(name), Worker(code)
//������name����Farmer��code����Worker
{
	cout << "MigrantWorker()" << endl;
}

MigrantWorker::~MigrantWorker()
{
	cout << "~MigrantWorker()" << endl;
}