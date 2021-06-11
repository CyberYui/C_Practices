#pragma once
#include <iostream>
#include "Match1.h"
using namespace std;

class Time
{
	friend void Match::printTime(Time &t);
	//作为友元函数，其位置可以任定，只要在Time类中即可
public:
	Time(int hour,int min,int sec);
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};