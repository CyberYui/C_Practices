#include <iostream>
#include <stdlib.h>
//引入string类头文件
#include <string>
using namespace std;

/*****************************************************************/
/*题目描述：                                                     */
/*    1.提示用户输入姓名                                         */
/*    2.接收用户的输入                                           */
/*    3.然后向用户问好：hello xxx                                */
/*    4.告诉用户名字的长度                                       */
/*    5.告诉用户名字的首字母是什么                               */
/*    6.如果用户直接输入回车，那么告诉用户的输入为空             */
/*    7.如果用户输入的是imooc，那么告诉用户的角色是一个管理员    */
/*****************************************************************/

int main(void)
{
	//提示用户输入姓名
	string name;
	cout << "Please input your name:";
	//判断用户输入是否为空
	getline(cin, name);//将cin的内容赋给name
	//判断name是否为空
	if (name.empty())
	{
		//若为空，输出提示并退出程序
		cout << "Input is null !" << endl;
		system("pause");
		return 0;
	}
	else if (name == "imooc")
	{
		//不为空，若为imooc，提示用户是管理员
		cout << "You are an administrator." << endl;
		cout << "Welcome back! " + name << endl;
	}
	//否则给用户打招呼
	else
		cout << "hello " + name << endl;

	//输出用户名字的长度
	//以下代码会出现无法显示长度的bug，不会报错
	//cout << "Your name length is: " + name.size() << endl;
	//字符串+数字的形式不能直接输出，要分段
	cout << "Your name length is: " << name.size() << endl;
	//输出用户名字的首字母
	cout << "Your name's first letter is: " << name[0] << endl;

	system("pause");
	return 0;
}