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
	//正解如下 :
	//Watch类中定义了对象成员, 即
	//Time m_tTime;
	//以及一个拷贝构造函数
	//Watch(const Time &t)
	//的确是类名与拷贝构造函数要同名, 一楼说的没毛病, 是我当时理解错了
	//该拷贝构造函数传入的是Time类型的引用t, 而t刚刚好是主函数中初始化的
	//Time t(6, 30, 20);
	//在这里使用了如下的初始化列表, 意思就是将t的内容传给m_tTime
	//Watch(const Time &t) :m_tTime(t)
	//这是一个深拷贝, 即将t对象的数据内容传给了m_tTime, 从而使得当拷贝构造函数执行完毕后, m_tTime有相应的数据成员内容, 即
	//m_tTime.m_iHour;      //=6
	//m_tTime.m_iMinute;    //=30
	//m_tTime.m_iSecond;    //=20
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