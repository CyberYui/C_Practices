#include <iostream>
#include <stdlib.h>
using namespace std;

/*ʾ��B�Ľṹ��
typedef struct
{				//����һ���ṹ��
	int x;
	int y;
}Coord;
*/


int main(void)
{
	/*ʾ��A���������õ�����
	int a = 10;
	int &b = a;			//b�ͳ���a��һ������

	b = 20;				//��������ֵ
	cout << a << endl;	//��b��ֵ���ӡa
	a = 30;				//�����帳ֵ
	cout << b << endl;	//��a��ֵ���ӡb
	//�������д���չʾ��b��a��ʵ��һ�������Ľ��
	*/

	/*ʾ��B�����ڽṹ�����õ�����
	Coord c;							//����һ���ṹ��c
	Coord &c1 = c;						//��c�����c1

	c1.x = 10;							//��c1��x��y��ֵ
	c1.y = 20;

	cout << c.x << "," << c.y << endl;	//���c��x��y���ɼ�c��c1��һ������
	*/
	
	int a = 3;
	int *p = &a;		//ָ��pָ��a
	int *&q = p;		//��ָ��p������q

	*q = 5;				//����q����a
	cout << a << endl;	//���a���Ƿ�a����ֵ

	system("pause");
	return 0;
}