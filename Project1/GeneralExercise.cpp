/*
�ۺ���ϰ

�����г��⳵�򳵼Ʒѹ������£�

1. ÿ���ﵥ�ۼƷ�2.3Ԫ

2. �𲽼�13Ԫ(����3����)

3. ����23��(��)�������賿5��(����)�򳵣�ÿ���ﵥ�ۼƷѼ���20%��

4. ÿ�γ˳�����1ԪǮ��ȼ�͸���˰��

С��ÿ�����°඼Ҫ�򳵣���˾�ͼҵľ���Ϊ12��������ϰ�ʱ��Ϊ9�㣬�����°�ʱ��Ϊ6�㡣

���дһ��С�������С��ÿ��򳵵��ܷ��á�
*/

#include <stdio.h>
static void calcuCost(int realDis)
{
	double perKm = 2.3;//ÿ���ﵥ�۹̶�,������С������Ҫʹ�÷�int����
	//int nightCost = 1.2*perKm;//ҹ�䵥�۹̶�,��������
	//���廨�ѣ���Ϊ����ֵ
	double cost = 0;
	//���㻨��
	cost = 14 + ((realDis - 3)*perKm);//�𲽼ۺ�ȼ�͸���˰�̶�����14Ԫ
	printf("һ��������%.2lfԪ", cost);//���ֻ������λС��������ֵ���ֵ
}

static void calcuNightCost(int realDis)//ҹ���г�
{
	float perKm = 1.2*2.3;
	float cost = 0;
	//���㻨��
	cost = 14 + ((realDis - 3)*perKm);
	printf("һ��������%.2lfԪ", cost);
}

int main()
{
	int distance = 12;
	int time = 9;
	//�ж�time�Ƿ������ռ��г���׼
	if (time >= 23 || time < 5)
	{//����12km�ļ�Ǯ����12km������㺯��
		calcuNightCost(distance);
	}
	else
	{//����12km�ļ�Ǯ,��12km������㺯��
		calcuCost(distance);
	}
	return 0;
}