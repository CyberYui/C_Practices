#include <iostream>
#include <stdlib.h>
#include "Dustman5.h"
#include "Person5.h"
#include "Worker5.h"

using namespace std;

/************************************************************************/
/* 纯虚函数抽象类
		1.Person类,成员函数:构造函数,虚析构函数,纯虚函数work
				   数据成员:名字m_strName
		2.worker类,成员函数:构造函数,work
				   数据成员:年龄m_iAge
		3.Dustman类,成员函数:构造函数,work
*/
/************************************************************************/

int main(void)
{
	//Person person("Zhangsan");
	//  错误代码      内容         错误原因
	//error C2259: “Person”: 不能实例化抽象类

	//Worker Worker("Zhangsan", 10);
	//error C2259 : “Worker”: 不能实例化抽象类
	//由于下列成员:
	//“void Person::work(void)”: 是抽象的
	//Worker Worker("Zhangsan", 10);//给work写些东西,就消去了抽象

	//当给纯虚函数函数(无论是继承或定义的)都写明函数体,则可以实例化,不抽象了
	//这样做的原因是,不论人或者工人,它都有很多的分类
	//只有知道了具体的分类(如Dustman清洁工)才能知道具体他的工作是什么
	//这样也就完成了只有知道身份才有相应的动作,而仅仅是个人的话
	//由于动作的可能性太多,无法确定动作

	Dustman dustman("Zhangsan", 20);
	dustman.work();

	//即对于一些抽象的类,我们并不需要它具体实现什么,因此使用纯虚函数
	//只有到了具体的类时,才知道它具体要做什么,这时则写出函数体

	system("pause");
	return 0;
}