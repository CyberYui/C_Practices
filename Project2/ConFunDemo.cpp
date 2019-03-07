/***************************************************/
/*		定义一个Teacher类                          */
/*				自定义无参构造函数                 */
/*				自定义有参构造函数				   */
/*		数据成员：								   */
/*				名字                               */
/*				年龄							   */
/*		成员函数：								   */
/*				数据成员的封装函数				   */
/*												   */
/*			进阶：可以利用类外定义改写本程序	   */
/***************************************************/
#include <iostream>
#include <stdlib.h>
#include <string>
#include "ConFunDemo.h"
//只需包含头文件，就可以使用到包含相同头文件的cpp文件
using namespace std;

int main(void)
{
	Teacher t1;//调用无参构造函数
	cout << "接下来输出相关内容" << endl;
	cout << t1.getName() << " " << t1.getAge() << endl;//输出t1的内容
	Teacher t2("Cyber", 24);//调用有参构造函数
	cout << "接下来输出相关内容" << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;//输出t2的内容
	Teacher t3("Merry");//调用有参构造函数
	cout << t3.getName() << " " << t3.getAge() << endl;//输出t3的内容

	system("pause");
	return 0;
}