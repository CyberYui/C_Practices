#pragma once

class Array 
{
public:
	//Array();
	Array(const Array& arr);
	~Array();
	void setCount(int count);
	int getCount();
	//��������2���������ݳ�Ա����غ���
	void printAddr();//��ָ��ĵ�ַ��ӡ����

	//����2�޸ĵĺ���
	Array(int count);

	//����2���º��������ڴ�ӡֵ
	void printArr();
private:
	//���ݳ�Ա
	int m_iCount;
	//����2���������ݳ�Ա
	int *m_pArr;
};