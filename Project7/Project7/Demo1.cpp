#include <iostream>
#include <stdlib.h>
#include "MyQueue1.h"
#include "Customer1.h"
using namespace std;


int main(void)
{
	/*MyQueue *p = new MyQueue(4);

	p->EnQueue(11);
	p->EnQueue(12);
	p->EnQueue(17);
	p->EnQueue(22);
	p->EnQueue(20);
	p->QueueTraverse();

	int e = 0;
	p->DeQueue(e);
	cout << "取出的值为" << e << endl;

	p->DeQueue(e);
	cout << "取出的值为" << e << endl;

	p->QueueTraverse();
	p->ClearQueue();
	p->QueueTraverse();

	p->EnQueue(20);
	p->EnQueue(30);
	p->QueueTraverse();

	delete p;
	p = NULL;*/

	//以下为对复杂类型的例子
	MyQueue *p = new MyQueue(4);
	Customer c1("Jim", 15);
	Customer c2("Brown", 25);
	Customer c3("Cyber", 24);
	Customer c4("Wanghe", 45);

	p->EnQueue(c1);
	p->EnQueue(c2);
	p->EnQueue(c3);
	p->EnQueue(c4);
	p->QueueTraverseCus();

	Customer c5("", 0);
	p->DeQueue(c5);
	c5.printInfo();
	p->QueueTraverseCus();

	system("pause");

	return 0;
}

//总结:一个队列是可以放很多种类型的数据的,且是一个先入先出的形式