/*
����14

������ѧ֪ʶ�ڴ���༭���У�

��4��16�и���ע����ʾ��д��Ӧ����

ʹ���н��������ʾ

	x=2
	x=4
	x=8
	x=16
	x=32
	x=100

*/

#include <stdio.h>
void fn()
{
	static int x = 1;   //���徲̬�ֲ�����
	x *= 2;
	printf("x=%d\n", x);
}

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		fn();
	}
	extern int x;      //�����ⲿ����
	printf("x=%d\n", x);
	return 0;
}
int x = 100;