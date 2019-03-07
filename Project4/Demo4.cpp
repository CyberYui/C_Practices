#include <iostream>
#include <stdlib.h>
#include "SoldierFourth.h"

/************************************************************************/
/* 继承关系中的隐藏
		要求：1.Person类，数据成员：m_strName
						  成员函数：构造函数、play()
			  2.Soldier类，数据成员：无
						   成员函数：构造函数、play()、work()
*/
/************************************************************************/

int main(void)
{
	Soldier soldier;
	soldier.play();
	//soldier.work();
	//访问隐藏内容
	soldier.Person::play();
	//上述是无参函数的内容，如果是有参函数呢？
	//soldier.play(7);
	//soldier调用play,只能调用自己的，继承来的必须要用特殊形式调用
	soldier.work();
	soldier.play(7);
	soldier.Person::play();
	//给soldier的同名数据成员进行调用,利用的是成员函数函数体
	//具体见修改后的play(int x)函数和work函数
	//发现这样还是只能调用自身的，如何调用person的同名数据成员呢
	//再次修改soldier的work函数具体见其中即可
	soldier.Person::play();

	system("pause");
	return 0;
}