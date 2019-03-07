#include <iostream>
#include "SoldierF.h"
using namespace std;

Soldier::Soldier()
{

}
void Soldier::work()
{
	//Part3  利用子类的函数可以调用基类的内容
	play();
	m_strName = "Jim";
	m_iAge = 20;
	cout << "m_strName= " << m_strName << endl;
	cout << "m_iAge= " << m_iAge << endl;
	cout << "Soldier -- work()" << endl;
}