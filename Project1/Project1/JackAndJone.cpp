/*
����10

Jone��Jackͬʱ��һ����ѧ�⣬Jone��Ľ�������أ���Jack���˰���˵��һ�仰�����㲻������

�ڴ���༭�����������⣺

��3��6��9��24����ע����ʾ��д����

���н��Ϊ

Jone�������ǣ�20
Jack�������ǣ����㲻����

*/

#include <stdio.h>
/* Jone������,�ʺ����з���ֵ */
int joneResult(int x, int y, int z)
{
	int sum = x + y + z;
	return sum / 3;          //��sum����
}
/* Jackû��������ֻ˵��һ�仰�����޷���ֵ���� */
void jackResult(int x, int y, int z)
{
	printf("���㲻����\n");
	//�պ����޷���ֵ
}
int main()
{
	int a, b, c;
	a = 10;
	b = 20;
	c = 30;
	//Jone�ķ���ֵ����Ҫͬ����������ͬ
	int jR = joneResult(a, b, c);
	printf("Jone�������ǣ�%d\n", jR);
	printf("Jack�������ǣ�");
	//Jackû��������ֻ˵�˾仰��ֱ�ӵ��ú����Ϳ�����
	jackResult(a, b, c);
	return 0;
}