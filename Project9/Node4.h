#ifndef NODEFOURTH_H
#define NODEFOURTH_H

#include "Person4.h"

//如果用struct定义类,则不需要再写public,因为默认的就是public
class Node
{
public:
	void printNode();
	//Node的数据域不再是一个int类型变量了
	//应该是一个Person类型
	//int data;//数据域
	Person data;
	Node *next;//指针域,指向下一个结点
};

#endif // NODETHIRD_H
