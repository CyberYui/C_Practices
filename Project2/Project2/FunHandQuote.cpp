#include <iostream>
#include <stdlib.h>
using namespace std;

//����һ�����������ڽ�����������λ��
void fun(int &a,int &b);			//��������������д���������·�

int main(void)
{
	int x = 10, y = 20;
	cout << x << "," << y << endl;	//x��y�����ֵ
	fun(x, y);
	cout << x << "," << y << endl;	//x��y�������ֵ

	system("pause");
	return 0;
}

void fun(int &a, int &b)			//����ʱ����ͷ�ṹ��ʵ�ʺ���ͷ�ṹ��Ҫһ��
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}