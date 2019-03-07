#include "WorkerS.h"

#include <iostream>
using namespace std;

Worker::Worker()
{
	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::work()
{
	m_strName = "Kaven";
	m_iAge = 30;
	cout << "work()" << endl;
}