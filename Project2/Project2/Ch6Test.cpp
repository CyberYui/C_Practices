/*单元巩固

定义一个Student类，包含名字和年龄两个数据成员
实例化一个Student对象，并打印出其成两个数据成员

*/

#include <iostream>
#include <string>
using namespace std;

/**
  * 定义类：Student
  * 数据成员：名字、年龄
  */
class Student
{//定义类，类名后是没有()的
public:
	// 定义数据成员名字 m_strName 和年龄 m_iAge
	string m_strName;
	int m_iAge;
};

int main()
{
	// 实例化一个Student对象stu
	Student stu;
	// 设置对象的数据成员
	stu.m_strName = "慕课网";
	stu.m_iAge = 2;

	// 通过cout打印stu对象的数据成员
	cout << stu.m_strName << " " << stu.m_iAge << endl;
	return 0;
}