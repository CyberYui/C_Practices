/*综合练习

在一个长度为10的整型数组里面，保存了班级10个学生的考试成绩。
要求编写5个函数
	分别实现计算考试的:
			A.总分，
			B.最高分，
			C.最低分，
			D.平均分,
			E.考试成绩降序排序。

并分别设置出输出内容
*/
#include <stdio.h>
//先声明五个函数，函数体内容写主函数后
void sumScore();     //总分
void maxScore();     //最高分
void minScore();     //最低分
void aveScore();     //平均分
void sortScore();    //降序排序

int main()
{
	int score[10] = { 67,98,75,63,82,79,81,91,66,84 };//一维数组
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
	printf("总分是:%d\n", sum);
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
	printf("最高分是:%d\n", maxNum);
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
	printf("最低分是:%d\n", minNum);
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
	printf("平均分是:%.2f\n", aveNum);
}

void sortScore(int arr[])
{
	printf("*****************接下来开始排序*****************\n");
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
	printf("\n*********************排序完成*********************\n");
}



