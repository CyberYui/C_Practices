/*巩固练习

定义Person人类，worker工人类及children儿童类

worker类中定义数据成员m_strName姓名

children类中定义成员m_iAge年龄

worker类及children类均虚公有继承Person类

定义ChildLabourer童工类
公有继承工人类和儿童类，从而形成菱形继承关系

在main函数中通过new实例化ChildLabourer类的对象
并通过该对象调用Person，Worker及Children类中的成员函数
最后销毁该对象，

目的：掌握多重继承，多继承，虚继承的定义方法。
*/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
 * 定义人类: Person
 */
class Person
{
public:
	Person()
	{
		cout << "Person" << endl;
	}
	~Person()
	{
		cout << "~Person" << endl;
	}
	void eat()
	{
		cout << "eat" << endl;
	}

};

/**
 * 定义工人类: Worker
 * 虚继承人类
 */
class Worker : virtual public Person
{
public:
	Worker(string name)
	{
		m_strName = name;
		cout << "Worker" << endl;
	}
	~Worker()
	{
		cout << "~Worker" << endl;
	}
	void work()
	{
		cout << m_strName << endl;
		cout << "work" << endl;
	}
protected:
	string m_strName;
};

/**
 * 定义儿童类:Children
 * 虚继承人类
 */
class Children : virtual Person
{
public:
	Children(int age)
	{
		m_iAge = age;
		cout << "Children" << endl;
	}
	~Children()
	{
		cout << "~Children" << endl;
	}
	void play()
	{
		cout << m_iAge << endl;
		cout << "play" << endl;
	}
protected:
	int m_iAge;
};

/**
 * 定义童工类：ChildLabourer
 * 公有继承工人类和儿童类
 */
class ChildLabourer :public Worker, public Children
{
public:
	ChildLabourer(string name, int age) :Worker(name), Children(age)
	{
		cout << "ChildLabourer" << endl;
	}

	~ChildLabourer()
	{
		cout << "~ChildLabourer" << endl;
	}
};

int main(void)
{
	// 用new关键字实例化童工类对象
	ChildLabourer *p = new ChildLabourer("Cyber", 10);
	// 调用童工类对象各方法。
	p->eat();
	p->work();
	p->play();
	delete p;
	p = NULL;

	return 0;
}

/*运行结果
		Person
		Worker
		Children
		ChildLabourer
		eat
		Cyber
		work
		10
		play
		~ChildLabourer
		~Children
		~Worker
		~Person

*/