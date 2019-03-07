#include "ArrayFirst.h"
#include <iostream>
using namespace std;

/*����1�ĺ���
Array::Array()
{
	cout << "Array()" << endl;
}
Array::Array(const Array& arr)
{
	//�������arr��m_iCount��ֵ��m_iCount
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

//����2�����ĺ���
void Array::printAddr()
{
	cout << "m_pArr��ֵΪ:" << m_pArr << endl;
}

//ͬʱ�޸Ĺ��캯���Ϳ������캯���Լ���������
Array::Array(int count)
{
	//������һ�����ȣ����������ڴ���֮�������ڴ���
	m_iCount = count;
	m_pArr = new int[m_iCount];//������Ӧ���ж�
	if (NULL == m_pArr)
	{
		cout << "�ڴ����ʧ��!" << endl;
		system("pause");
	}
	//��������ڴ治Ϊ��ʱ��ѭ�������ʼֵ
	for (int i=0;i<m_iCount;i++)
	{
		m_pArr[i] = i;
	}
	cout << "Array()" << endl;
}
Array::Array(const Array& arr)
{
	//�������arr��m_iCount��ֵ��m_iCount
	m_iCount = arr.m_iCount;
	cout << "Array(const Array& arr)" << endl;
	//ǳ����m_pArr=arr.m_pArr,�ͱ��ָ��ͬһ���ڴ��ָ����
	//��Ӧʹ�����
	m_pArr = new int[m_iCount];
	//���������ڴ�ͻ���䵽��arrһ����С��һ���ڴ�
	//ʹ��forѭ�����������λ�õ�ֵ
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i];//��arr�е����ݿ�������������ڴ���
	}
	/*
		����˵���������������һ���ڴ�
		m_pArr = new int[m_iCount];
		Ȼ�󽫴�������Ķ����Ӧλ�õ��ڴ����ݿ�������������ڴ���
		for (int i = 0; i < m_iCount; i++)
		{
			m_pArr[i] = arr.m_pArr[i];
		}
		����������ָ��ָ��ľͲ���ͬһ���ڴ��ַ��
	*/
}
Array::~Array()
{
	delete[]m_pArr;
	m_pArr = NULL;//ʹָ������ڰ�ȫ״̬
	cout << "~Array()" << endl;
}

//ʵ��void printArr()����
void Array::printArr()
{
	//ʹ��forѭ����һ��ӡԪ��
	for (int i=0;i<m_iCount;i++)
	{
		cout << m_pArr[i] << "," ;
	}
	cout << endl;
}