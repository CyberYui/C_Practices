/*数据的封装

定义一个Student类，含有如下信息：
	1.姓名：name
	2.性别：gender
	3.学分(只读)：score  //这样就实现封装
	4.学习：study

*/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//首先定义学生类，包含一些信息
class Student
{
public:
	//接下来写成员函数，就是普通的set和get方法
	//注意的是set方法用空，里面传值，get方法只返回值，类型是非void的
	void setName(string _name)
	{
		m_strName = _name;
	}

	string getName()
	{
		return m_strName;
	}
	//性别函数
	void setGender(string _gender)
	{
		m_strGender = _gender;
	}

	string getGender()
	{
		return m_strGender;
	}

	//对于只读的内容，只写get函数，不写set函数就好了
	int getScore() 
	{
		return m_iScore;
	}
	//但是学分需要有设初值的方法，所以设置一个方法，只用于设置初值
	void initScore()
	{
		m_iScore = 0;//简单地设置一个初始值就好
	}
	//利用重载的知识，写一个如果有传值的方法
	//以后的传初值的方法会用构造函数来实现
	void initScore(int _score)
	{
		m_iScore = _score;//其实就是个特别名字的set方法而已
	}
	/*如果没有初始化，m_iScore的值会由编译器随机给值*/
	/*例如VS2017会给其-858993452这样的值，错误很可怕*/

	//接下来是一个学习的函数
	void study(int _score)
	{
		m_iScore += _score;
		//学习后获得的分数和原分数相加，得到总分
	}

private://命名规则，要求m_+类型简称+数据名称
	string m_strName;
	string m_strGender;
	int m_iScore;
	//这样命名就更易辨认
};


int main(void)
{
	//实例化对象
	Student stu;
	string realName;
	cout << "你好新同学，请输入姓名:" << endl;
	cin >> realName;
	stu.setName(realName);
	//入学，无分数
	cout << "欢迎" << stu.getName() << "入学!" << endl;

	string realGender;
	cout << "你好" << stu.getName() << ",请输入性别:" << endl;
	cin >> realGender;
	stu.setGender(realGender);

	//第一次考完试，初始化分数
	int firScore;
	cout << "请输入现在的学分数:" << endl;
	cin >> firScore;
	stu.initScore(firScore);//分数初始化

	//接下来学习获得学分
	int extScore;
	cout << "请输入你获得的学分:" << endl;
	cin >> extScore;
	stu.study(extScore);
	cout << "你现在的学分是:" << stu.getScore() << endl;

	system("pause");
	cout << stu.getName() << "，退出系统。。。" << endl;
	return 0;
}//本项目的运行时间为10s