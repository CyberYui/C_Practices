#include "ArrayFirst.h"
#include <iostream>
using namespace std;

/*环节1的函数
Array::Array()
{
	cout << "Array()" << endl;
}
Array::Array(const Array& arr)
{
	//将传入的arr的m_iCount赋值给m_iCount
	m_iCount = arr.m_iCount;
	cout << "Array(const Array& arr)" << endl;
}
Array::~Array()
{
	cout << "~Array()" << endl;
}
*/

void Array::setCount(int count)
{
	m_iCount = count;
}
int Array::getCount()
{
	return m_iCount;
}

//环节2新增的函数
void Array::printAddr()
{
	cout << "m_pArr的值为:" << m_pArr << endl;
}

//同时修改构造函数和拷贝构造函数以及析构函数
Array::Array(int count)
{
	//给设置一个长度，这样就能在传参之后申请内存了
	m_iCount = count;
	m_pArr = new int[m_iCount];//理论上应该判断
	if (NULL == m_pArr)
	{
		cout << "内存分配失败!" << endl;
		system("pause");
	}
	//当分配的内存不为空时，循环赋予初始值
	for (int i=0;i<m_iCount;i++)
	{
		m_pArr[i] = i;
	}
	cout << "Array()" << endl;
}
Array::Array(const Array& arr)
{
	//将传入的arr的m_iCount赋值给m_iCount
	m_iCount = arr.m_iCount;
	cout << "Array(const Array& arr)" << endl;
	//浅拷贝m_pArr=arr.m_pArr,就变成指向同一段内存的指针了
	//故应使用深拷贝
	m_pArr = new int[m_iCount];
	//这样分配内存就会分配到和arr一样大小的一段内存
	//使用for循环来拷贝相关位置的值
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i];//将arr中的内容拷贝给新申请的内存中
	}
	/*
		所以说深拷贝就是首先申请一段内存
		m_pArr = new int[m_iCount];
		然后将传入进来的对象对应位置的内存内容拷贝到申请的新内存中
		for (int i = 0; i < m_iCount; i++)
		{
			m_pArr[i] = arr.m_pArr[i];
		}
		这样，两个指针指向的就不是同一个内存地址了
	*/
}
Array::~Array()
{
	delete[]m_pArr;
	m_pArr = NULL;//使指针放置于安全状态
	cout << "~Array()" << endl;
}

//实现void printArr()函数
void Array::printArr()
{
	//使用for循环逐一打印元素
	for (int i=0;i<m_iCount;i++)
	{
		cout << m_pArr[i] << "," ;
	}
	cout << endl;
}