/*
����

����1��20֮�䲻�ܱ�3����������֮�͡�

������Ϊ�� sum=147

*/

#include <stdio.h>
int main()
{
	int i,sum;
	for(i=1,sum=0;i<=20;i++)
	{
		if(i%3==0)    //��Ҫ��i�Ƿ��ܱ�3����������������ֱ��������һ��ѭ�������Թ���sum+=i�Ĳ���
		{
			continue;      //ʹ��continue�Թ��˴�ѭ��֮�����䣺sum+=i
		}
		sum+=i;          //�������
	}
	printf("sum=%d\n",sum);
	return 0;
}