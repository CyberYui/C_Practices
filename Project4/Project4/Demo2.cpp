/*继承方式:公有继承
要求：
	1.定义Person类,要求含有m_strName和m_iAge两个数据成员
		构造函数和析构函数,eat函数
	2.定义Worker类，要求公有继承Person类,含有数据成员m_iSalary
		构造函数和析构函数,work函数
	3.查看如果写到不同的关键字中是否还能互相调用内容
*/

#include <iostream>
#include <stdlib.h>
#include "WorkerS.h"
#include "PersonS.h"

using namespace std;

int main(void)
{

	Worker worker;
	/*worker.m_strName = "Jim";
	worker.m_iAge = 10;
	worker.eat();
	worker.m_iSalary = 4000;*/
	worker.work();

	/*Person person;*/
	//person.m_strName="Merry";//会报错
	//person.m_iAge=20;//会报错

	//person.eat();
	//程序正常运行



	system("pause");
	return 0;
}