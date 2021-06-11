/*
	巩固练习
	定义一个能够移动（Movable）类，要求含有纯虚函数move
	定义一个公交车（Bus）类，继承Movable类，并实现函数move，定义函数carry
	定义一个坦克（Tank）类，继承Movable类，并实现函数move，定义函数shot。
	定义函数doSomething（Movable *obj）,根据s指向对象的类型调用相应的函数。

	实例化公交车类和坦克类，将对象传入到doSomething函数中，调用相应函数
*/
#include <iostream>
#include <stdlib.h>
#include <string>
#include <typeinfo>//有时会由于没有导入这个头而出错
using namespace std;

/**
 * 定义移动类：Movable
 * 纯虚函数：move
 */
class Movable
{
public:
	virtual void move() = 0;
};

/**
 * 定义公交车类：Bus
 * 公有继承移动类
 * 特有方法carry
 */
class Bus : public Movable
{
public:
	virtual void move()
	{
		cout << "Bus -- move" << endl;
	}

	void carry()
	{
		cout << "Bus -- carry" << endl;
	}
};

/**
 * 定义坦克类：Tank
 * 公有继承移动类
 * 特有方法fire
 */
class Tank :public Movable
{
public:
	virtual void move()
	{
		cout << "Tank -- move" << endl;
	}

	void fire()
	{
		cout << "Tank -- fire" << endl;
	}
};

/**
 * 定义函数doSomething含参数
 * 使用dynamic_cast转换类型
 */
void doSomething(Movable *obj)
{
	obj->move();

	if (typeid(*obj) == typeid(Bus))
	{
		Bus *bus = dynamic_cast<Bus *>(obj);
		bus->carry();
	}

	if (typeid(*obj) == typeid(Tank))
	{
		Tank *tank = dynamic_cast<Tank *>(obj);
		tank->fire();
	}
}

int main(void)
{
	Bus *b = new Bus();
	Tank *t = new Tank();
	doSomething(b);
	doSomething(t);
	delete b;
	b = NULL;
	delete t;
	t = NULL;
	return 0;
}