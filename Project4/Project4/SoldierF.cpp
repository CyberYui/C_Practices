#include <iostream>
#include "SoldierF.h"
using namespace std;

Soldier::Soldier()
{

}
void Soldier::work()
{
	//Part3  ��������ĺ������Ե��û��������
	play();
	m_strName = "Jim";
	m_iAge = 20;
	cout << "m_strName= " << m_strName << endl;
	cout << "m_iAge= " << m_iAge << endl;
	cout << "Soldier -- work()" << endl;
}