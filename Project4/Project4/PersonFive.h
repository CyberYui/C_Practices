#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person(string name="Cyber");
	//~Person();������������������������������������ȫִ��
	//����������
	virtual ~Person();//virtual�ǿ��Ա��̳е�
	void play();
protected:
	string m_strName;
private:
};