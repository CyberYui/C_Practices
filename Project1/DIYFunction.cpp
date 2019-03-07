/*
任务8

小明固定在慕课网上学习，每当学习一门课程，在他的已学课程中都会加1，
想想用什么样的函数可以得到运行结果为：

小明在慕课网上学习
小明在慕课网上已经参与学习了7门课程

××表示小明学习的课程数
*/
#include <stdio.h>
/* 考虑一下哪个输出该用无参函数哪个输出该用有参函数呢？ */
int LearnCourse()
{
	printf("小明在慕课网上学习\n");
	return 0;
}
int CourseNum(int n)
{
	int i;
	printf("小明在慕课网上已经参与学习了%d门课程", n);
	return 0;
}
int main()
{
	LearnCourse();
	CourseNum(7);
	return 0;
}