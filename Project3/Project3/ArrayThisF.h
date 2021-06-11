#pragma once
class Array
{
public:
	Array(int len);
	~Array();

	void setLen(int len);
	int getLen();
	//修改printInfo函数的返回值
	//void printInfo();
	//Array printInfo();
	Array& printInfo();
	//写个函数用来传出this指针的地址
	Array* printThis();
private:
	//对数据成员改造,以便于使用this指针
	//int m_iLen;
	int len;
};