/*任务21

在主方法中定义了三个字符串数组变量，
s1、s2、s3请根据字符串函数，
使用printf格式化输出语句输出s1，使其结果为

	我爱,慕课网

*/

#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = "";
	char s2[] = "我爱,";
	char s3[] = "慕课网";
	/*补全代码*/
	strcpy(s1, s2);//这里也可使用strcat(s1,s2)，效果一样
	strcat(s1, s3);
	printf("%s\n", s1);
	return 0;
}