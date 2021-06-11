#include <stdlib.h>
#include <iostream>
#include "MyLinkedList4.h"
#include "Node4.h"
using namespace std;

/************************************************************************/
/* 线性表 -- 通讯录
/*
/*	 联系人信息:姓名  电话
/*   //将联系人信息作为结点的数据域进行存储
/*
/*   成员函数:
/*     BOOL InitList(List **list);	//创建线性表(单链表)
/*     void DestroyList(List *list);//销毁线性表(单链表)
/*     void ClearList(List *list);  //清空线性表(单链表)
/*     BOOL ListEmpty(List *list);  //判断线性表(单链表)是否为空
/*     int ListLength(List *list);  //获取线性表(单链表)长度
/*     BOOL GetElem(List *list,int i,Elem *e);  //获取指定元素
/*
/*     //寻找第一个满足e的数据元素的位序
/*     int LocateElem(List *list,Elem *e);
/*
/*	   //获取指定元素的前驱
/*     BOOL PriorElem(List *list,Elem *currentElem,Elem *preElem);
/*
/*	   //获取指定元素的后继
/*     BOOL NextElem(List *list,Elem *currentElem,Elem *nextElem);
/*
/*     BOOL ListInsert(List *list,int i,Elem *e);    //在第i个位置插入元素
/*     BOOL ListDelete(List *list,int i,Elem *e);    //删除第i个位置的元素
/*     void ListTraverse(List *list);                //便利线性表(单链表)
/*
/*     BOOL ListInsertHead(List *list,Node *pNode);	 //从头插入结点
/*     BOOL ListInsertTail(List *list,Node *pNode);	 //从尾插入结点
/*
/* 循环链表和双链表自行设计
/************************************************************************/

int main(void)
{
	Node node1;
	node1.data.name = "Jim";
	node1.data.phone = "13639779291";
	Node node2;
	node2.data.name = "Cyebr";
	node2.data.phone = "13757326643";

	List *pList = new List();

	//pList->ListInsertTail(&node1);
	//pList->ListInsertTail(&node2);
	pList->ListInsertHead(&node1);
	pList->ListInsertHead(&node2);

	pList->ListTraverse();

	delete pList;
	pList = NULL;

	system("pause");

	return 0;
}