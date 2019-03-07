/*
任务12

猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃了一个。
以后每天都吃前一天剩下的一半零一个。
到第10天在想吃的时候就剩一个桃子了,问第一天共摘下来多少个桃子？
并反向打印每天所剩桃子数。

在代码编辑器中：

第7，11，12行根据注释提示填写代码

运行结果为：
	第9天所剩桃子4个
	第8天所剩桃子10个
	第7天所剩桃子22个
	第6天所剩桃子46个
	第5天所剩桃子94个
	第4天所剩桃子190个
	第3天所剩桃子382个
	第2天所剩桃子766个
	第1天所剩桃子1534个
	猴子第一天摘了:1534个桃子。
*/
/*
由于需要反向打印，即从第十天开始算起，
猴子吃桃是按n-n/2-1=x，即n/2-1=x这么吃的，反过来，剩下x个，则是(x+1)*2即为n
第十天有1个桃子，则第九天有4个桃子，第八天有10个桃子...
*/
#include <stdio.h>
int getPeachNumber(int n);//为方便分析，把函数定义到前面先
/*
先看主函数，第一行有效代码是   
int num = getPeachNumber(1)
即num=第一天有几个桃子，当n=1时，显然转入else语句中
此时num=(getPeachNumber(n+1)+1)*2  即num=(getPeachNumber(2)+1)*2
第一个n+1是指第二天所剩的桃子数，
+1即加回多吃的那一个，
*2即获得第一天的桃子数，

此时内部有一个getPeachNumber(2)，对它再做分析
显然n=2，转入else语句
此时num=(getPeachNumber(3)+1)*2  即num=(((getPeachNumber(3)+1)*2)+1)*2
getPeachNumber(2)其实就是(getPeachNumber(3)+1)*2，
即第二天所剩的桃子数是第三天的桃子数加1后乘以二

以此类推，会得到
num=((getPeachNumber(10)+1)*2)+1)*2....
而已知第十天剩下一个桃子，故此时的函数可以被1代替，也就是if中的return 1;
num={[(1+1)*2]+1}*2....=1534
这样就得到了第一天的桃子数

具体内容看递推图即可,
G:\C_Practices\Project1\Project1\MonkeyPeach.png
https://www.processon.com/view/link/5c6eb354e4b056ae2a120f4b
*/
int main()
{
	int num = getPeachNumber(1);
	printf("猴子第一天摘了:%d个桃子。\n", num);
	return 0;
}

int getPeachNumber(int n)
{
	int num;    //定义所剩桃子数
	if (n == 10)
	{
		return 1;       //递归结束条件
	}
	else
	{
		num = (getPeachNumber(n + 1) + 1) * 2;   //这里是不应该用递归呢？
		printf("第%d天所剩桃子%d个\n", n, num); //天数，所剩桃子个数
	}
	return num;
}