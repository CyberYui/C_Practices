/************************************************************************/
/* Teacher类：                                                          */
/*       自定义有参默认构造函数                                         */
/*       使用初始化列表初始化数据                                       */
/*     数据：                                                           */
/*          名字                                                        */
/*          年龄                                                        */
/*     成员函数：                                                       */
/*           数据成员的封装函数                                         */
/*                                                                      */
/*     拓展：                                                           */
/*           定义可以带最多学生的个数，此为常量                         */
/*                                                                      */
/************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string>
#include "InitTableDemo.h"
using namespace std;

int main(void)
{
	Teacher t1;
	cout << t1.getName() << " " << t1.getAge() << " " << t1.getNum() << endl;
	//换一种方式初始化对象
	Teacher t2("Merry", 22);
	cout << t2.getName() << " " << t2.getAge() << " " << t2.getNum() << endl;
	//查看是否能利用初始化列表控制常量
	Teacher t3("James", 32, 20);
	cout << t3.getName() << " " << t3.getAge() << " " << t3.getNum() << endl;
	system("pause");
	return 0;
}