#pragma once
class Match;
class Time
{
	friend Match;//����֤��Match��Time����Ԫ����Time��һ����Match����Ԫ
	//��Match���Ե���Time�ĺ��������ݣ����������Ͳ���
public:
	Time(int hour,int min,int sec);
private:
	void printTime();
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};