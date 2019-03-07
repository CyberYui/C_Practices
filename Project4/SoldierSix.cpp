#include <iostream>
#include "SoldierSix.h"
using namespace std;

Soldier::Soldier(string name, int age)
{
	m_strName = name;
	m_iAge = age;
	cout << "Soldier()" << endl;
}
Soldier::~Soldier()//这里是不需要virtual关键字修饰的
{
	cout << "~Soldier()" << endl;
}
void Soldier::work()
{
	cout << m_strName << m_iAge << endl;
	cout << "Soldier() --> work()" << endl;
}