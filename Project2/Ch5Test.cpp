/*单元巩固

在堆中申请100个char类型的内存，
拷贝Hello imooc字符串到分配的堆中的内存中,
打印字符串,最后释放内存。

*/

#include <string.h>
#include <iostream>
using namespace std;
int main(void)
{
	//在堆中申请100个char类型的内存
	char *str = new char[100];//一定别忘记new
	//拷贝Hello C++字符串到分配的堆中的内存中
	strcpy(str, "Hello C++");//这里是用数组名称，不是指针
	//打印字符串
	cout << str << endl;//打印的是数组，不是指针，指针只指第一个元素
	//释放内存
	delete[]str;
	str = NULL;
	return 0;
}