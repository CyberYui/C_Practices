#pragma once
class Array
{
public:
	Array(int len);
	~Array();

	void setLen(int len);
	int getLen();
	//�޸�printInfo�����ķ���ֵ
	//void printInfo();
	//Array printInfo();
	Array& printInfo();
	//д��������������thisָ��ĵ�ַ
	Array* printThis();
private:
	//�����ݳ�Ա����,�Ա���ʹ��thisָ��
	//int m_iLen;
	int len;
};