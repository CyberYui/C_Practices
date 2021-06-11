/*
保护继承和私有继承：
	要求：1.Person类，数据成员：
								m_strName,
					  成员函数：
								构造函数,play()
		  2.Soldier类，数据成员：
								m_iAge
					   成员函数：
								构造函数,work()
		  3.Infantry类，成员函数：
								 attack()
*/

#include <iostream>
#include <stdlib.h>
//Part1  #include "SoldierF.h"
//Part2  #include "InfantryF.h";
#include "SoldierF.h"

int main(void)
{
	/*Part1*/
	//Soldier soldier;
	//soldier.work();//尝试调用work函数,相当于间接访问基类的东西
	//soldier.play();//尝试调用Person类的play函数
	//这样是可以调用的，接下来进入Part2

	/*Part2*/
	//S使用protected方式继承P
	//Soldier soldier;
	//soldier.work();//尝试调用work函数,相当于间接访问基类的东西
	//soldier.play();
	//这样调用会报错，由于继承是protected，所以基类的对象无法被子类调用了
	//修改Infantry的attack函数，它可以通过public继承soldier从而调用person的函数
	//Infantry infantry;
	//infantry.attack();//正常运行
	//这说明了soldier还是继承了person的内容到protected中

	/*Part3*/
	//S使用private方式继承P
	//这样之后，Soldier可以调用Person的函数了
	//因为Person中protected和public的内容被继承到Soldier的private中了
	//相对的Infantry无法调用person的内容了，因为Person中protected和public的内容被继承到Soldier的private中了
	Soldier soldier;
	soldier.work();//尝试调用work函数,相当于间接访问基类的东西
	/*soldier.play();//这样不行的原因是应该从子类的函数中去调用，而不是在主函数中用对象去调用
	soldier.m_strName;*/

	system("pause");
	return 0;
}