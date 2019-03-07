/*
综合练习

北京市出租车打车计费规则如下：

1. 每公里单价计费2.3元

2. 起步价13元(包含3公里)

3. 晚上23点(含)至次日凌晨5点(不含)打车，每公里单价计费加收20%。

4. 每次乘车加收1元钱的燃油附加税。

小明每天上下班都要打车，公司和家的距离为12公里，上午上班时间为9点，下午下班时间为6点。

请编写一个小程序计算小明每天打车的总费用。
*/

#include <stdio.h>
static void calcuCost(int realDis)
{
	double perKm = 2.3;//每公里单价固定,由于有小数，需要使用非int类型
	//int nightCost = 1.2*perKm;//夜间单价固定,本题无用
	//定义花费，作为返回值
	double cost = 0;
	//计算花费
	cost = 14 + ((realDis - 3)*perKm);//起步价和燃油附加税固定，即14元
	printf("一共花费了%.2lf元", cost);//输出只含有两位小数点后数字的数值
}

static void calcuNightCost(int realDis)//夜间行车
{
	float perKm = 1.2*2.3;
	float cost = 0;
	//计算花费
	cost = 14 + ((realDis - 3)*perKm);
	printf("一共花费了%.2lf元", cost);
}

int main()
{
	int distance = 12;
	int time = 9;
	//判断time是否满足日间行车标准
	if (time >= 23 || time < 5)
	{//计算12km的价钱，将12km传入计算函数
		calcuNightCost(distance);
	}
	else
	{//计算12km的价钱,将12km传入计算函数
		calcuCost(distance);
	}
	return 0;
}