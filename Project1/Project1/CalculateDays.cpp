/*����6
��ʹ��switch����if...else��䣬����2008��8��8����һ�죬�Ǹ����еĵڼ��졣

���������

  ��5��1��Ϊ����Ӧ���Ȱ�ǰ4���µ�������������Ȼ���ټ���1�켴����ĵڼ��졣

���������

  �ڼ��������ʱ��2����29�졣
*/
#include <stdio.h>
int main()
{
	/* ������Ҫ��������� */
	int year = 2008;
	int month = 8;
	int day = 8;
	int true_day = day;
	/*
	 * ��ʹ��switch��䣬if...else�����ɱ���
	 * �����뿴С��˼·�ģ����Ե����������еġ���������ô�족
	 * С�໹��ϣ����Ҷ������Ŷ~
	 */
	int new_month = month - 1;
	switch (new_month)
	{
		/*����ÿ���¶���Ҫ����case 2�������ж����������
		case 1:
			day+=31;
			break;
		case 2:
			if(year%4==0)
			{
				day+=60;
				printf("����������~��");
				break;
			}
			else
			{
				day+=59;
				printf("���겻������~��");
				break;
			}
		case 3:
			day+=91;
			break;
		case 4:
			day+=121;
			break;
		case 5:
			day+=152;
			break;
		case 6:
			day+=182;
			break;
		*/
		case 7:
			if (year % 4 == 0)
			{
				day += 213;
				printf("����������~!\n");
				break;
			}
			else
			{
				day += 212;
				printf("���겻������~!\n");
				break;
			}
		/*����ÿ���¶���Ҫ����case 2�������ж����������
		case 8:
			day+=244;
			break;
		case 9:
			day+=274;
			break;
		case 10:
			day+=305;
			break
		case 11:
			day+=335;
			break;
		case 12:
			day+=366;
			break;
		*/
	}
	printf("%d��%d��%d���Ǹ���ĵ�%d��", year, month, true_day, day);
	return 0;
}