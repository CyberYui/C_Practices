#include "Dustman5.h"
#include <iostream>
using namespace std;

Dustman::Dustman(string name,int age):Worker(name,age)
{}

void Dustman::work()
{//���ˣ������ʵ�֣�����ȡ��
	cout << "ɨ��" << endl;
}