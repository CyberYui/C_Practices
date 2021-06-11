#include <iostream>
#include "WorkerEight.h"
using namespace std;

/*Part1
Worker::Worker(string code, string color) :Person(color)
{
	m_strCode = code;

	cout << "Worker()" << endl;
}
*/

Worker::Worker(string code, string color) :Person("Worker " + color)
{
	m_strCode = code;

	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::carry()
{
	cout << "m_strCode: "<<m_strCode << endl;
	cout << "Worker() --> carry()" << endl;
}