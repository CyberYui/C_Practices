#pragma once
#include <string>
#include "PersonEight.h"
using namespace std;

class Farmer:virtual public Person//virtual��public��˳����Ի�������Ӱ����
{
public:
	Farmer(string name="Cyebr",string color="black");
	virtual ~Farmer();
	void sow();
protected:
	string m_strName;
};