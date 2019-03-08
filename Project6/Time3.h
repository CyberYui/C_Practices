#pragma once
class Match;
class Time
{
	friend Match;//这样证明Match是Time的友元，但Time不一定是Match的友元
	//即Match可以调用Time的函数和数据，但反过来就不行
public:
	Time(int hour,int min,int sec);
private:
	void printTime();
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};