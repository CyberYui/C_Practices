/*目的：
查看使用public继承的子类及其子类对基类的函数和数据成员调用

基本状态：
定义三个类，Person，Student，Children
关系是Person是Student的基类，Student是Children的基类
每个类都有public和protected以及private的内容
每种内容分别有一个数据成员和成员函数
*/

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

/*Person类*/
class Person
{
public:
	Person(string name = "Jim", int time = 300, string sex = "man")
	{
		p_strName = name;
		p_iTime = time;
		p_strSex = sex;
		cout << "Person()" << endl;
	}
	string getName()
	{
		cout << "getName()" << endl;
		return p_strName;
	}
	string p_strName;
protected:
	int getTime()
	{
		cout << "getTime()" << endl;
		return p_iTime;
	}
	int p_iTime;
private:
	void setSex(string sex)
	{
		cout << "setSex(string sex)" << endl;
		p_strSex = sex;
	}
	string p_strSex;
};

/*Student类*/
//需要该类以public继承person类,main函数中实验1和2看结果
class Student:public Person
{
public:
	Student(int age = 5, bool love = true, int money = 600)
	{
		s_iAge = age;
		s_bLove = love;
		s_iMoney = money;
		cout << "Student()" << endl;
	}
	int getAge()
	{
		cout << "getAge()" << endl;
		return s_iAge;
	}
	int s_iAge;
	//测试调用person的protected函数及public函数
	void Test()
	{
		cout << "Test()" << endl;
		getName();
		getTime();
		//cout << p_strSex << endl;
		//“Person::p_strSex”: 无法访问 private 成员(在“Person”类中声明)
	}
protected:
	bool getLove()
	{
		cout << "getLove()" << endl;
		return s_bLove;
	}
	bool s_bLove;
private:
	void setMoney(int money)
	{
		cout << "setMoney(int money)" << endl;
		s_iMoney = money;
	}
	int s_iMoney;
};

/*Children类*/
//需要该类以public继承student类,main函数中实验3看结果
class Children:public Student
{
public:
	Children(int height = 169, string toy = "Teddy bear", int weight = 30)
	{
		c_iHeight = height;
		c_strToy = toy;
		c_iWeight = weight;
		cout << "Children()" << endl;
	}
	int getHeight()
	{
		cout << "getHeight()" << endl;
		return c_iHeight;
	}
	int c_iHeight;
	//测试调用person和student的protected函数及public函数
	void printInfo()
	{
		cout << "printInfo()" << endl;
		//尝试调用person类的内容
		getName();//public
		getTime();//protected
		//cout << p_strSex << endl;//private
		//“Person::p_strSex”: 无法访问 private 成员(在“Person”类中声明)

		//尝试调用student类的内容
		getAge();//public
		getLove();//protected
		//cout << s_iMoney << endl;//private
		//“Student::s_iMoney”: 无法访问 private 成员(在“Student”类中声明)
	}
protected:
	string getToy(string toy)
	{
		cout << "getToy(string toy)" << endl;
		c_strToy = toy;
	}
	string c_strToy;
private:
	void setWeight(int weight)
	{
		cout << "setWeight(int weight)" << endl;
		c_iWeight = weight;
	}
	int c_iWeight;
};

int main(void)
{
	//实验1.看Student的对象是否能调用Person的函数和数据成员
	Student stu1;
	stu1.getAge();//调用自身public函数

	//stu1.getLove();//调用自身protected函数
	//“Student::getLove”: 无法访问 protected 成员(在“Student”类中声明)

	//stu1.setMoney(3000);//调用自身private函数
	//“Student::setMoney”: 无法访问 private 成员(在“Student”类中声明)

	stu1.getName();//调用person的public函数

	//stu1.getTime();//调用person的protected函数
	//“Person::getTime”: 无法访问 protected 成员(在“Person”类中声明)

	//stu1.setSex("Female");//调用person的private函数
	//“Person::setSex”: 无法访问 private 成员(在“Person”类中声明)

	//实验2.看Student的public成员函数能否调用public的public、protected、private函数
	//具体见Student类Test函数
	//可见能访问public和protected的函数
	//同样的，Student自身的成员函数是可以使用Student的public和protected及private内容的
	//【注】上述内容要写在成员函数体中，而不是用对象调用
	stu1.Test();

	//实验3.看Children类能否在public继承Student类后使用Student和Person的成员函数及数据成员
	//同样，先实例化一个children对象
	Children child1;
	child1.getName();//调用person的public函数

	//child1.getTime();//调用person的protected函数,出错
	//child1.setSex("Male");//调用person的private函数,出错

	//接下来尝试调用student的类
	child1.getAge();//调用student的public函数

	//child1.getLove();//调用student的protected函数,出错
	//child1.setMoney(3000);//调用student的private函数,出错

	//实验4.在Children中写一个成员函数printInfo，看能否:
	//		1.调用public的public、protected、private函数内容
	//		2.调用student的public、protected、private函数内容
	//具体见children的public中的printInfo函数
	//可见能访问Person和Student类public和protected的函数
	//同样的，Children自身的成员函数是可以使用Children的public和protected及private内容的
	//【注】上述内容要写在成员函数体中，而不是用对象调用
	child1.printInfo();

	/*结论
	子类Student以public形式继承基类Person
		实例化student对象后，
		1.能调用自身public函数
		2.能调用基类public函数
		无法调用自身的protected和private内容
	但是基类Person的protected函数是被继承了的,
					因此子类Student的成员函数能够在函数体中调用Person中的public和protected内容

	子类Student的子类Children以public形式继承Student
		实例化child对象后，
		1.能调用自身的public函数
		2.能调用Person基类的public函数
		2.能调用Student基类的public函数
		无法调用自身的protected和private内容
	但是由于基类Person的protected函数是被Student继承了的,
	而且Children以public形式继承了Student.
					因此子类Children的成员函数能够在函数体中调用
								1.Person中的public和protected内容
								2.Student中的public和protected内容
	*/

	system("pause");
	return 0;
}
/*运行结果
	//stu1实例化开始
	Person()		//调用Person构造函数
	Student()		//调用Student构造函数
	getAge()		//对象调用了Student中的public中的getAge()
	getName()		//对象调用了Person中的public中的getName()
	Test()			//对象调用了Student中的public中的Test()
	getName()		//Test()调用了Person中的public中的getName()
	getTime()		//Test()调用了Person中的protected中的getTime()
	//child1实例化开始
	Person()		//调用Person构造函数
	Student()		//调用Student构造函数
	Children()		//调用Children构造函数
	getName()		//对象调用了Person中的public中的getName()
	getAge()		//对象调用了Student中的public中的getAge()
	printInfo()		//对象调用了Children中的public中的printInfo()
	getName()		//printInfo()调用了Person中的public中的getName()
	getTime()		//printInfo()调用了Person中的protected中的getTime()
	getAge()		//printInfo()调用了Student中的public中的getAge()
	getLove()		//printInfo()调用了Student中的protected中的getLove()
*/