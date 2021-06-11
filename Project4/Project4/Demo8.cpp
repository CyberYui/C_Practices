#include <iostream>
#include <stdlib.h>
#include "MigrantWorkerEight.h"

/************************************************************************/
/* 虚继承
		要求：1.Farmer类，数据成员：m_strName
						  成员函数：构造函数、析构函数、sow()
			  2.Worker类，数据成员：m_strCode
						  成员函数：构造函数、析构函数、carry()
			  3.MigrantWorker类，数据成员：无
								 成员函数：构造函数、析构函数
			  4.Person类，数据成员：m_strColor
						  成员函数：构造函数、析构函数、printColor()
*/
/************************************************************************/

int main(void)
{
	//如果基类的头文件含有#pragma once，如果main中什么都不写则可以执行
	//如果基类的头文件不含有#pragma once等内容时
	//如果在main函数中什么都不写就运行，会出现以下问题,
	/*
	1>g:\c_practices\project4\project4\personeight.h(6): 
			error C2011: “Person”:“class”类型重定义

	1>g:\c_practices\project4\project4\personeight.h(5): 
			note: 参见“Person”的声明

	1>g:\c_practices\project4\project4\farmereight.h(7): 
			error C2504: “Person”: 未定义基类
	*/
	//这样的问题是在当前的工程当中Person被定义了两遍，也就是说到的菱形关系问题
	//解决重定义的方法是
	//1.#pragma once
	//#pragma once是一个比较常用的C/C++杂注
	//只要在头文件的最开始加入这条杂注，就能够保证头文件只被编译一次。
	//2.宏定义，使用这种方式使类只被编译一次，具体见PersonEight.h

	//下面开始试验
	//Part1 看在实例化农民工这个底层类的时候，函数的调用情况
	MigrantWorker *p = new MigrantWorker("Cyber","531","white");
	delete p;
	p = NULL;
	cout << "****************************Part1****************************" << endl;
	/*
		Person()			//实例化Farmer和Worker时，都需要先构造Person
		Farmer()
		Person()
		Worker()
		MigrantWorker()		//最后实例化农民工
		~MigrantWorker()
		~Worker()
		~Person
		~Farmer()
		~Person
		请按任意键继续. . .
	*/

	//Part2 其实农民工中已经存在了两份Person的数据
	//使用调用的方式证明这一点
	MigrantWorker *p1 = new MigrantWorker("Cyber", "531", "white");
	//实现这一点需要改造一些函数，分别是Worker(),Farmer()
	//通过农民工的指针分别打印两份Person
	//两份Person是来自于Worker和Farmer的
	p1->Farmer::printColor();
	p1->Worker::printColor();
	delete p1;
	p1 = NULL;
	/*
		Person()
		Farmer()
		Person()
		Worker()
		MigrantWorker()
		~MigrantWorker()
		~Worker()
		~Person
		~Farmer()
		~Person
		****************************Part1****************************
		Person()
		Farmer()
		Person()			//Person还是构造了两次
		Worker()
		MigrantWorker()
		m_strColor: Farmer white		//Farmer跟的white
		Person() --> printColor()
		m_strColor: Worker white		//Worker跟的white
		Person() --> printColor()
		//可见实例化的对象是有两份color的数据的，我们希望只有一个，进入Part3
		~MigrantWorker()
		~Worker()
		~Person
		~Farmer()
		~Person
		请按任意键继续. . .
	*/
	cout << "****************************Part2****************************" << endl;
	/*Part3
	只实例化一份Person对象的方法-->虚继承
	*/
	//改造Worker类和Farmer类的定义
	MigrantWorker *p2 = new MigrantWorker("Cyber", "531", "white");
	p2->Farmer::printColor();
	p2->Worker::printColor();
	delete p2;
	p2 = NULL;
	/*
	...
	****************************Part2****************************
		Person()
		Farmer()
		Worker()			//Person只实例化了一次，提高了程序效率
		MigrantWorker()
		m_strColor: blue
		Person() --> printColor()
		m_strColor: blue
		Person() --> printColor()		//只有默认参数被使用，无法从子类中获得传入的参数
		~MigrantWorker()
		~Worker()
		~Farmer()
		~Person
	*/

	system("pause");
	return 0;
}