//#pragma once
//�궨��ͷ
#ifndef PERSONEIGHT_H//ע�⣬���������û��#ifndef�����������#ifdef
#define PERSONEIGHT_H
#include <string>
using namespace std;


class Person
{
public:
	Person(string color="blue");
	virtual ~Person();
	void printColor();
protected:
	string m_strColor;
};

//�궨��β
#endif // PERSONEIGHT_H
