/*任务6
请使用switch语句和if...else语句，计算2008年8月8日这一天，是该年中的第几天。

程序分析：

  以5月1日为例，应该先把前4个月的天数加起来，然后再加上1天即本年的第几天。

特殊情况：

  在计算闰年的时候，2月是29天。
*/
#include <stdio.h>
int main()
{
	/* 定义需要计算的日期 */
	int year = 2008;
	int month = 8;
	int day = 8;
	int true_day = day;
	/*
	 * 请使用switch语句，if...else语句完成本题
	 * 如有想看小编思路的，可以点击左侧任务中的“不会了怎么办”
	 * 小编还是希望大家独立完成哦~
	 */
	int new_month = month - 1;
	switch (new_month)
	{
		/*其他每个月都需要类似case 2的内容判断闰年和闰月
		case 1:
			day+=31;
			break;
		case 2:
			if(year%4==0)
			{
				day+=60;
				printf("今年是闰年~！");
				break;
			}
			else
			{
				day+=59;
				printf("今年不是闰年~！");
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
				printf("今年是闰年~!\n");
				break;
			}
			else
			{
				day += 212;
				printf("今年不是闰年~!\n");
				break;
			}
		/*其他每个月都需要类似case 2的内容判断闰年和闰月
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
	printf("%d年%d月%d日是该年的第%d天", year, month, true_day, day);
	return 0;
}