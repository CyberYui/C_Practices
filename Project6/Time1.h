#pragma once
#include <iostream>
#include "Match1.h"
using namespace std;

class Time
{
	friend void Match::printTime(Time &t);
	//��Ϊ��Ԫ��������λ�ÿ����ζ���ֻҪ��Time���м���
public:
	Time(int hour,int min,int sec);
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};