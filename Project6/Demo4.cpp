#include <iostream>
using namespace std;
class Watch;

/**
 * 定义Time类
 * 数据成员：m_iHour， m_iMinute，m_iSecond
 * 成员函数：构造函数
 * 友元类：Watch
 */
class Time
{
	// 友元类
	friend Watch;
public:
	Time(int hour, int min, int sec)
	{
		m_iHour = hour;
		m_iMinute = min;
		m_iSecond = sec;
	}
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};

/**
 * 定义Watch类
 * 数据成员：m_tTime
 * 成员函数：构造函数
 * display用于显示时间
 */
class Watch
{
public:
	//主函数中要求传入一个对象，所以要使用拷贝构造函数
	//导入一个Time对象，再将此对象初始化列表给Watch中实例化的对象
	Watch(const Time &t) :m_tTime(t)
	{

	}

	void display()
	{
		cout << m_tTime.m_iHour << endl;
		cout << m_tTime.m_iMinute << endl;
		cout << m_tTime.m_iSecond << endl;
	}
public:
	Time m_tTime;
};

int main()
{
	Time t(6, 30, 20);
	Watch w(t);//浅拷贝
	//上句等价于Watch w=t;
	w.display();

	return 0;
}

/*
关于Watch w(t);
Watch w(t);

拷贝构造函数并不需要函数名和类名同名

之前课上只说了拷贝构造函数的格式是: 类名(const 类名 &变量名)

这里换成对象就是   类名(const 类名 &对象名)，&对象名只是一个引用，引用的这个对象t是有参数值的

类中实例化的对象没有传值，但是这个对象需要传值，由于参数列表相同，所以给类中实例化的对象m_tTime传了t
*/