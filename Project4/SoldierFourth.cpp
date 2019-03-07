#include "SoldierFourth.h"
#include <iostream>
using namespace std;


Soldier::Soldier()
{

}
void Soldier::play()
{
	cout << "Soldier -- >play()" << endl;
}
//¸ÄÐ´play
void Soldier::play(int x)
{
	cout << m_strName << endl;
	cout << "Soldier -- >play(int x)" << endl;
}
void Soldier::work()
{
	m_strName = "Jim";
	Person::m_strName = "Cyber";
	cout << "Soldier -- >work()" << endl;
}