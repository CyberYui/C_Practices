#include "PersonFourth.h"//˫��������ͬĿ¼ͷ�ļ�
//#include <PersonFourth.h>������д���������ǳ����Ĭ�Ͽ�
#include <iostream>
using namespace std;

Person::Person()
{
	m_strName = "Merry";
}

void Person::play()
{
	cout << "Person() -- >play()" << endl;
	cout << m_strName << endl;
}