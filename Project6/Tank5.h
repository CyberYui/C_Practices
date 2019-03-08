#pragma once

class Tank
{
public:
	Tank(char code);
	~Tank();
	void fire();
	static int getCount();
	//static int getCount() const;
	//error C2272: “getCount”: 静态成员函数上不允许修饰符
private:
	static int s_iCount;
	char m_cCode;
};