#pragma once
#include <string>
#include "PersonEight.h"
using namespace std;

//Part1&2:  class Worker:public Person{};
//Part3
class Worker:virtual public Person//��ʱWorker�������
{
public:
	Worker(string code = "001",string color="red");
	virtual ~Worker();
	void carry();
protected:
	string m_strCode;
};
