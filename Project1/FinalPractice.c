/*�ۺ���ϰ

��һ������Ϊ10�������������棬�����˰༶10��ѧ���Ŀ��Գɼ���
Ҫ���д5������
	�ֱ�ʵ�ּ��㿼�Ե�:
			A.�ܷ֣�
			B.��߷֣�
			C.��ͷ֣�
			D.ƽ����,
			E.���Գɼ���������

���ֱ����ó��������
*/
#include <stdio.h>
//�������������������������д��������
void sumScore();     //�ܷ�
void maxScore();     //��߷�
void minScore();     //��ͷ�
void aveScore();     //ƽ����
void sortScore();    //��������

int main()
{
	int score[10] = { 67,98,75,63,82,79,81,91,66,84 };//һά����
	sumScore(score);
	maxScore(score);
	minScore(score);
	aveScore(score);
	sortScore(score);
	return 0;
}

void sumScore(int arr[])
{
	int sum=0;
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	printf("�ܷ���:%d\n", sum);
}

void maxScore(int arr[])
{
	int maxNum = arr[1];
	for (int i = 0; i < 10; i++)
	{
		if (maxNum < arr[i])
			maxNum = arr[i];
		else
			continue;
	}
	printf("��߷���:%d\n", maxNum);
}

void minScore(int arr[])
{
	int minNum = arr[1];
	for (int i = 0; i < 10; i++)
	{
		if (minNum < arr[i])
			continue;
		else
			minNum = arr[i];
	}
	printf("��ͷ���:%d\n", minNum);
}

void aveScore(int arr[])
{
	int sum = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	float aveNum = sum / (i + 1);
	printf("ƽ������:%.2f\n", aveNum);
}

void sortScore(int arr[])
{
	printf("*****************��������ʼ����*****************\n");
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			else
			{
				continue;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n*********************�������*********************\n");
}



