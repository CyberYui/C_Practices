/*******************FunChaDemo.cpp*******************/
/* 练习的使用方式：                                 */
/*     一共有三个部分，当需要看哪个部分的结果时，将 */
/* 相应的内容释放出来即可，注意一个函数声明就对应一 */
/* 个函数体，释放时都得释放，还有主程序中的调用。   */
/****************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

//Part 1中的函数声明
//void fun(int i, int j=60, int k=90);//给j和k默认值
//Part 2中的函数声明
//void fun(int i = 30, int j = 60, int k = 90);//给i、j、k默认值
//void fun(double i, double j);//只声明，函数名同
//Part 3中的函数声明
//inline void fun(int i = 30, int j = 60, int k = 90);
//inline void fun(double i, double j);

int main(void)
{
	//练习函数参数默认值、函数重载、内联函数
	/*Part 1
	
	函数参数默认值的定义等,以下为调用内容
	fun(1);
	fun(100);
	fun(300, 400);
	fun(700, 90, 250);

	*/
	
	/*Part 2

	函数重载等内容，以下为调用内容
	fun(1, 2);//调用整形
	fun(1.1, 2.2);//调用double型

	*/
	
	/*Part 3
	
	内联函数等内容，以下为调用内容
	fun(7, 8, 9);
	fun(30.2, 20.78);

	*/
	


	system("pause");
	return 0;
}

//Part 1中函数的函数体
/*
void fun(int i, int j, int k)//实现时尽量别写默认值
{
	cout << "i,j,k的值分别是：" << i << " , " << j << " , " << k << endl;
}
*/

//Part 2中函数的函数体
/*
void fun(int i, int j, int k)//实现时尽量别写默认值
{
	cout << "i,j,k的值分别是：" << i << " , " << j << " , " << k << endl;
}
void fun(double i, double j)
{
	cout << "两个数的值分别是：" << i << " , " << j << endl;
}
*/

//Part 3中函数的函数体
//inline可以省去，因为声明时声明了是建议内联
/*
inline void fun(int i, int j, int k)//实现时尽量别写默认值
{
	cout << "i,j,k的值分别是：" << i << " , " << j << " , " << k << endl;
}
inline void fun(double i, double j)
{
	cout << "两个数的值分别是：" << i << " , " << j << endl;
}
*/