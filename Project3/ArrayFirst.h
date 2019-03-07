#pragma once

class Array 
{
public:
	//Array();
	Array(const Array& arr);
	~Array();
	void setCount(int count);
	int getCount();
	//声明环节2新增的数据成员的相关函数
	void printAddr();//将指针的地址打印出来

	//环节2修改的函数
	Array(int count);

	//环节2的新函数，用于打印值
	void printArr();
private:
	//数据成员
	int m_iCount;
	//环节2新增的数据成员
	int *m_pArr;
};