#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	//new和delete的使用方法
	/*申请一个内存

	//申请一个int内存，并初始化20这个值

	//可以这样：
	//int *p = new int(20);

	//或者可以这样:
	//int *p = new int;
	//*p = 20;
	//cout << *p << endl;
	//delete p;
	//p = NULL;
	
	//实际操作：
	int *p = new int;
	if (NULL==p)//检查是否申请成功内存
	{
		//失败就退出
		system("pause");
		return 0;
	}
	//成功就赋值，并且输出
	*p = 20;
	cout << *p << endl;
	//释放内存，并赋空值
	delete p;
	p = NULL;

	*/

	/*申请块内存
	//实际操作：
	int *p = new int[1000];
	if (NULL==p)//检查是否申请成功内存
	{
		//失败就退出
		system("pause");
		return 0;
	}
	//给申请到的地方赋值
	p[0] = 10;
	p[1] = 20;
	//输出，看是否成功
	cout << p[0] << " , " << p[1] << endl;
	//释放内存块，并赋空值
	delete []p;//一定要有中括号
	p = NULL;
	*/
	system("pause");
	return 0;
}