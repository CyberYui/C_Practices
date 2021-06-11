#pragma once
#include <iostream>
#include <string>
using namespace std;

//声明了Teacher类以及相应的函数
class Teacher
{
public:
	//声明构造函数
	Teacher();
	//Teacher(string name, int age);
	//可以声明带默认值的构造函数，会与上面这行注释冲突，产生重定义错误
	Teacher(string name, int age = 20);

	/*有时如果参数全有默认值，可能会冲突，无法正确编译					 */
	/*如Teacher(string name = "James", int age = 20);与Teacher();就会冲突*/
	/*因为电脑自己不知道应该调用哪一个函数								 */

	//以下为成员函数声明
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};