/*
任务11

小明为了学好英语，需要每天记单词，第一天记1个，第二天记2个依次类推，到第10天的时候小明一共记了多少个单词？

请用代码完成，算出小明第10天开始的时候会了多少个单词？

输出结果为:

小明第10天记了:55个单词。

*/

#include <stdio.h>
/* 定义获取单词数量的函数 */
int getWordNumber(int n)
{
	if (n == 1)
	{
		return 1;    //第一天只会1个单词
	}
	else {
		//到第n天会的单词数量,递归调用，天数递减，单词数递增
		return getWordNumber(n - 1) + n;
	}
}
int main()
{
	int num = getWordNumber(10);     //获取会了的单词数量
	printf("小明第10天记了:%d个单词。\n", num);
	return 0;
}