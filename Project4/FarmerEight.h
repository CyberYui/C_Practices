#pragma once
#include <string>
#include "PersonEight.h"
using namespace std;

class Farmer:virtual public Person//virtual和public的顺序可以互换，不影响结果
{
public:
	Farmer(string name="Cyebr",string color="black");
	virtual ~Farmer();
	void sow();
protected:
	string m_strName;
};