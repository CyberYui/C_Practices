/*******************FunChaDemo.cpp*******************/
/* ��ϰ��ʹ�÷�ʽ��                                 */
/*     һ�����������֣�����Ҫ���ĸ����ֵĽ��ʱ���� */
/* ��Ӧ�������ͷų������ɣ�ע��һ�����������Ͷ�Ӧһ */
/* �������壬�ͷ�ʱ�����ͷţ������������еĵ��á�   */
/****************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

//Part 1�еĺ�������
//void fun(int i, int j=60, int k=90);//��j��kĬ��ֵ
//Part 2�еĺ�������
//void fun(int i = 30, int j = 60, int k = 90);//��i��j��kĬ��ֵ
//void fun(double i, double j);//ֻ������������ͬ
//Part 3�еĺ�������
//inline void fun(int i = 30, int j = 60, int k = 90);
//inline void fun(double i, double j);

int main(void)
{
	//��ϰ��������Ĭ��ֵ���������ء���������
	/*Part 1
	
	��������Ĭ��ֵ�Ķ����,����Ϊ��������
	fun(1);
	fun(100);
	fun(300, 400);
	fun(700, 90, 250);

	*/
	
	/*Part 2

	�������ص����ݣ�����Ϊ��������
	fun(1, 2);//��������
	fun(1.1, 2.2);//����double��

	*/
	
	/*Part 3
	
	�������������ݣ�����Ϊ��������
	fun(7, 8, 9);
	fun(30.2, 20.78);

	*/
	


	system("pause");
	return 0;
}

//Part 1�к����ĺ�����
/*
void fun(int i, int j, int k)//ʵ��ʱ������дĬ��ֵ
{
	cout << "i,j,k��ֵ�ֱ��ǣ�" << i << " , " << j << " , " << k << endl;
}
*/

//Part 2�к����ĺ�����
/*
void fun(int i, int j, int k)//ʵ��ʱ������дĬ��ֵ
{
	cout << "i,j,k��ֵ�ֱ��ǣ�" << i << " , " << j << " , " << k << endl;
}
void fun(double i, double j)
{
	cout << "��������ֵ�ֱ��ǣ�" << i << " , " << j << endl;
}
*/

//Part 3�к����ĺ�����
//inline����ʡȥ����Ϊ����ʱ�������ǽ�������
/*
inline void fun(int i, int j, int k)//ʵ��ʱ������дĬ��ֵ
{
	cout << "i,j,k��ֵ�ֱ��ǣ�" << i << " , " << j << " , " << k << endl;
}
inline void fun(double i, double j)
{
	cout << "��������ֵ�ֱ��ǣ�" << i << " , " << j << endl;
}
*/