#include "ArrayThisF.h"
#include <iostream>
using namespace std;


Array::Array(int len)
{
	this->len = len;//��thisָ��д���������׻����ĵط�
	cout << "Array(int len)" << endl;
}
Array::~Array()
{
	cout << "~Array()" << endl;
}

void Array::setLen(int len)
{
	this->len = len;//��thisָ��д���������׻����ĵط�
}
int Array::getLen()
{
	return this->len;//��thisָ��д���������׻����ĵط�
}

//���ص�*this�����һ����ʱ��Array����
/*
	Array Array::printInfo()
	{
		//��thisָ��д���������׻����ĵط�
		//cout << "����Ĵ�СΪ:" << this->len << endl;

		//�Դ˺�����Ϊʵ�����
		cout << "len=" << len << endl;
		return *this;
	}
*/
//�ٴθ�дprintInfo����,��һ�����÷���
Array& Array::printInfo()
{
	//��thisָ��д���������׻����ĵط�
	//cout << "����Ĵ�СΪ:" << this->len << endl;

	//�Դ˺�����Ϊʵ�����
	cout << "len=" << len << endl;
	//ֻҪ��Ҫ�����õķ�ʽ��д����������Ҫreturn *this
	return *this;
}


Array* Array::printThis()
{
	cout << "this=" << this << endl;
	//�ǵ�return this
	return this;
}