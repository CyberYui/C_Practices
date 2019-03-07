#include <iostream>
#include <stdlib.h>
#include "SoldierFive.h"

/************************************************************************/
/*公有继承：Is-a
		要求：1.Person类，数据成员：m_strName
						  成员函数：构造函数、析构函数、play()
			  2.Soldier类，数据成员：m_iAge
						   成员函数：构造函数、析构函数、work()
			  3.定义函数test1(Person p)
						test2(Person &p)
						test3(Person *p)
*/
/************************************************************************/

//声明函数
void test1(Person p);
void test2(Person &p);
void test3(Person *p);

int main(void)
{
	//Soldier soldier;
	//先不定义函数test1，test2和test3
	//若使用soldier初始化p
	//Person p = soldier;//用Person p; 和 p=soldier;是一样的效果
	//p.play();
	/*运行结果
		Person()
		Soldier()
		Person --> play()
		请按任意键继续. . .
		~Person()
		~Soldier()
		~Person()
	*/
	//使用Person定义对象
	//Person p;
	//p.play();
	/*运行结果
		Person()
		Soldier()
		Person()
		Person --> play()
		请按任意键继续. . .
		~Person()
		~Soldier()
		~Person()
	*/
	//使用指针
	//Person *p =new Soldier;
	//p->play();
	//p->work();//“work”: 不是“Person”的成员
	//使用指针只能调用Person自有的数据成员和数据对象
	//delete p;
	//p = NULL;
	/*运行结果,可以看出来子类的析构函数未被调用，这是会导致内存泄漏的
		Person()
		Soldier()
		Person-- > play()
		~Person()
	*/
	//修改Person.h，写出虚析构函数
	/*运行结果，可以看出基类和子类的析构函数皆被调用
		Person()
		Soldier()
		Person --> play()
		~Soldier()
		~Person()
	*/
	//写test函数，写好后执行以下内容
	Person p;
	Soldier s;
	//分别传参
	//test1(p);
	//test1(s);
	/*
		Person()			//实例化p
		Person()			//实例化s
		Soldier()

		//test1在传值时由于参数是对象，因此会临时创建一个对象p作为参数，用它调用play
		Person --> play()	//调用play
		Cyber
		~Person()			//销毁临时对象p
		//test1在传值时由于参数是对象，因此会临时创建一个对象s作为参数，用它调用play
		//而soldier的构造函数中修改了值，所以会显示到最后结果中
		Person --> play()	
		David
		~Person()			//调用析构函数，销毁临时对象s
		//可见如果函数的参数是基类的对象，那么基类的对象和派生类的对象都可以传入进来
		//并且能够正常使用
		请按任意键继续. . .
		~Soldier()
		~Person()
		~Person()
	*/
	//test2(p);//运行过程中没有临时对象的创建
	//test2(s);
	/*
		Person()
		Person()
		Soldier()			//实例化person和soldier对象
		//test1在传值时由于参数是引用，所以会在传参时对对象起别名p，从而调用play
		Person --> play()	
		Cyber
		//test1在传值时由于参数是引用，所以会在传参时对对象起别名s，从而调用play
		//而soldier的构造函数中修改了值，所以会显示到最后结果中
		Person --> play()
		David
		//可见如果函数的参数是基类的引用，那么基类的对象和派生类的对象都可以传入进来
		//并且能够正常使用
		请按任意键继续. . .
		~Soldier()
		~Person()
		~Person()
	*/
	test3(&p);//传入地址
	test3(&s);
	/*可见运行结果与test2运行一样
		Person()
		Person()
		Soldier()
		//test3在传参时由于参数是指针，这个指针是基类的指针p
		//当对象地址被传入时，指针p会分别调用基类和子类的成员函数和数据成员
		Person --> play()
		Cyber
		Person --> play()
		David
		请按任意键继续. . .
		~Soldier()
		~Person()
		~Person()
	*/
	/*
	可以看出来当使用test2或test3时，效率会更高，因为没有临时参数的创建
	*/

	system("pause");
	return 0;
}

void test1(Person p)//对象参数
{
	p.play();
}
void test2(Person &p)//引用参数
{
	p.play();
}
void test3(Person *p)//指针参数
{
	p->play();
}