#pragma once

class Tank
{
public:
	Tank(char code);
	~Tank();
	void fire();
	static int getCount();
	//static int getCount() const;
	//error C2272: ��getCount��: ��̬��Ա�����ϲ��������η�
private:
	static int s_iCount;
	char m_cCode;
};