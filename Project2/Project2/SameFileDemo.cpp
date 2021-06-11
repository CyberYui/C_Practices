/***************************************************************/
/*	  定义一个Teacher类，要求分别采用同文件类外定义和分文件类外*/
/*定义的方式完成，具体要求如下：                               */
/*		数据成员：                                             */
/*              名字                                           */
/*              年龄                                           */
/*              性别                                           */
/*		成员函数：                                             */
/*              数据成员的封装函数                             */
/*              授课teach函数                                  */
/***************************************************************/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//定义Teacher类
class Teacher 
{
public:
	//开始声明函数，函数体写在类外
	void setName(string _name);
	string getName();

	void setGender(string _gender);
	string getGender();

	void setAge(int _age);
	int getAge();
	//教学函数
	void teach();

private:
	string m_strName;	//姓名
	string m_strGender;	//性别
	int m_iAge;			//年龄
};

//类外定义成员函数
void Teacher::setName(string _name)
{
	m_strName = _name;
}
string Teacher::getName()
{
	return m_strName;
}

void Teacher::setGender(string _gender)
{
	m_strGender = _gender;
}
string Teacher::getGender()
{
	return m_strGender;
}

void Teacher::setAge(int _age)
{
	m_iAge = _age;
}
int Teacher::getAge()
{
	return m_iAge;
}

void Teacher::teach()
{
	cout << "开始授课" << endl;
}

int main(void)
{
	Teacher t;//实例化栈对象
	//Teacher *t = new Teacher();//实例化堆对象
	t.setName("孔子");
	t.setGender("男");
	t.setAge(30);
	cout << t.getName() << " " << t.getAge() << " " << t.getGender();
	t.teach();

	system("pause");
	//释放内存
	//delete t;
	//t=NULL;
	return 0;
}