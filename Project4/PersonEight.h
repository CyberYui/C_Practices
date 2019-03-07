//#pragma once
//宏定义头
#ifndef PERSONEIGHT_H//注意，这里是如果没有#ifndef，不是如果有#ifdef
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

//宏定义尾
#endif // PERSONEIGHT_H
