#include <iostream>
#include <stdlib.h>
using namespace std;
//#define x 3�����ĵ�const int x=3��һ����
//���ߵ������ǣ�defin�Ǻ궨�壬����ʱ�������constҪ���

//Part 3�к���������������������������
//void fun(const int &a,const int &b);
void fun(int &a, int &b);

int main(void)
{
	/*Part 1

	//��δ�������չʾconst���ʹ��
	const int x = 3;//���峣��x��x�����ٱ��޸�ֵ
	//��ʱ��x = 5;�Ǵ����

	int y = 4;
	//�������д��������ַ�ʽ���壬Ч����ȫ��ͬ
	int const *p = &y;//����const int *p = &y;
	cout << "y��ֵΪ��" << *p << endl;
	//*p = 6;��ʱͨ��*p�޸�y��ֵ�ᱨ��
	//��ʱ���ܸ�ֵ�������Ի�ָ���磺p = &x;
	int k = 100;
	p = &k;
	cout << "k��ֵΪ��" << *p << endl;
	//y = 6;���������Ϳ��ԣ���Ϊy�ڶ���ʱ�Ǳ���

	int z = 5;
	int *const q = &z;//��ʱqָ��z
	//p = &y;��ʱ�ᱨ����Ϊq��ָ�򱻳�������ֻ��ָ��z���Ҳ��ɱ�
	*q = 10;//��Ȼ���ܻ�ָ�򣬵����Ը�ֵ
	cout <<"z��ֵ��Ϊ��"<< z << endl;//�����ӡz�������

	*/

	/*Part 2

	//��������const����һЩ����
	int x = 3;
	int y = 5;
	int &z = x;
	//int const &z = x;  //�������ú�z��x�ı������ɱ��ˣ���x��Ȼ�ɱ�
	z = 10;//���������

	*/

	/*Part 3*/
	//�������ú���������
	int x = 3;
	int y = 5;
	cout << "ԭ��x��y��:" << x << "," << y << endl;
	fun(x, y);
	cout << "����x��y��:" << x << "," << y << endl;
	system("pause");
	return 0;
}

//	void fun(const int &a,const int &b) //�������ú����޷��ı�a��b��ֵ��
void fun(int &a, int &b)
{
	a = 10;
	b = 20;
}