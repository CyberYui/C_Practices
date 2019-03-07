#include "InfantryF.h"
#include <iostream>
using namespace std;

void Infantry::attack()
{
	//Part3
	//因为Person中protected和public的内容被继承到Soldier的private中了
	//所以Infantry无法去调用person的函数了
	/*m_strName = "Jim";
	cout << m_strName << endl;*/
	cout << "Infantry -- attack()" << endl;
}