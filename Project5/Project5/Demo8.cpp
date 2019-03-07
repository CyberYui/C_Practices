#include <iostream>
#include "Bird8.h"
#include "Plane8.h"
using namespace std;

/************************************************************************/
/* RTTI
		1.Flyable类,成员函数:takeoff,land
		2.Plane类,成员函数:takeoff,land,carry
		3.Bird类,成员函数:takeoff,land,foraging
		4.全局函数doSomething(Flyable *obj)
*/
/************************************************************************/

void doSomething(Flyable *obj)
{
	//typeid(*obj)参数用*obj意思是指obj指针指向的对象
	//.name()会传回Bird，Plane这样的类型名
	cout << typeid(*obj).name() << endl;
	obj->takeoff();
	if (typeid(*obj)==typeid(Bird))//判断obj指针指向的对象类型是否为Bird
	{//使用dynamic_cast将其转换为Bird的指针，并将这个指针赋值给新的指针bird
		Bird *bird = dynamic_cast<Bird *>(obj);
		bird->foraging();
	}
	if (typeid(*obj) == typeid(Plane))//判断obj指针指向的对象类型是否为Plane
	{//含义同上
		Plane *plane = dynamic_cast<Plane *>(obj);
		plane->carry();
	}
	obj->land();
}

int main(void)
{
	/*
	//实例化bird对象
	Bird b;
	doSomething(&b);//传入其引用
	cout << "-----------------------------------------------------" << endl;
	Plane *p = new Plane();
	doSomething(p);

	delete p;
	p = NULL;

	//以下为typeid和dynami_cast的注意事项实验
	int i;
	cout << typeid(i).name() << endl;//这样可以看出i的类型
	Flyable *k = new Bird();
	cout << typeid(k).name() << endl;//观察k和*k的打印区别
	cout << typeid(*k).name() << endl;

	delete k;
	k = NULL;
	*/
	/*
		class Bird
		Bird --> takeoff()
		Bird --> foraging()
		Bird --> land()
		-----------------------------------------------------
		class Plane
		Plane --> takeoff()
		Plane --> carry()
		Plane --> land()
		int
		class Flyable *		//cout << typeid(k).name() << endl;
		class Bird			//cout << typeid(*k).name() << endl;
	*/

	//接下来看dynamic_cast的注意事项
	//首先修改Flyable类，Bird类，去掉纯虚函数
	//Flyable *p = new Bird();
	//Bird *b = dynamic_cast<Bird *>(p);
	//    //报错error C2683: “dynamic_cast”:“Flyable”不是多态类型
	//delete p;
	//p = NULL;
	//delete b;
	//b = NULL;
	
	//同样的，用对象也不可以
	/*Flyable p;
	Bird b = dynamic_cast<Bird>(p);*/
	//报错error C2683: “dynamic_cast”:“Flyable”不是多态类型
	//以及error C2680: “Bird”: dynamic_cast 的目标类型无效
	//原因：目标类型必须是指向已定义类的指针或引用

	system("pause");
	return 0;
}