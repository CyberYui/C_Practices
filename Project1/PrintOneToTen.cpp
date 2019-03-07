/*
任务7

以下程序实现从控制台输出1 - 10，使用goto语句，实现当输出完3之后跳出循环体。

在代码编辑器中：

第9、10、12行根据注释提示填写代码。

运行结果为

	1
	2
	3
	结束for循环了....
*/
#include <stdio.h>
int main()
{
	int sum = 0;
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		if (i == 3)//判断i是否等于3，是的话就准备跳出循环
			goto LOOP;//在这里使用goto语句
	}
LOOP:printf("结束for循环了....");  //这样就实现了不用break但跳出循环的功能
	return 0;
}
