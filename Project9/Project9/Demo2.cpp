/************************************************************************/
/* 线性表 -- 顺序表														*/
/*																		*/
/*   3 5 7 2 9 1 8														*/
/*																		*/
/*	 (前驱)元素的前一个元素<---元素--->(后继)元素的后一个元素			*/
/*																		*/
/* 顺序表的基本操作(C语言)												*/
/*	 [注]C语言中的*list在C++中完全可以用this指针代替,					*/
/*		 从而三个参数的成员函数也可以只需要两个参数了					*/
/*																		*/
/*	 BOOL InitList(List **list);	//创建线性表(顺序表)	构造函数	*/
/*	 void DestroyList(List *list);	//销毁线性表(顺序表)	析构函数	*/
/*	 void ClearList(List *list);	//清空线性表(顺序表)				*/
/*   BOOL ListEmpty(List *list);	//判断线性表(顺序表)是否为空(无元素)*/
/*   int ListLength(List *list);	//获取线性表(顺序表)长度(个数)		*/
/*																		*/
/*	 //传入一个顺序表list,下标i,元素内容给e,并返回e						*/
/*   BOOL GetElem(List *list,int i,Elem *e);	//获取指定元素			*/
/*																		*/
/*	 //寻找第一个满足e的数据元素的位置									*/
/*	 //传入e,在list中找这个元素											*/
/*   int LocateElem(List *list,Elem *e);								*/
/*																		*/
/*	 //获取指定元素的前驱												*/
/*	 //传入顺序表list,当前元素currentElem,前驱赋给preElem,并返回		*/
/*   BOOL PriorElem(List *list,Elem *currentElem,Elem *preElem);		*/
/*																		*/
/*	 //获取指定元素的后继												*/
/*	 //传入顺序表list,当前元素currentElem,后继赋给nextElem,并返回		*/
/*   BOOL NextElem(List *list,Elem *currentElem,Elem *nextElem);		*/
/*																		*/
/*	 //在指定的索引为i的位置插入元素e,并将之后的元素后移一位			*/
/*   BOOL ListInsert(List *list,int i,Elem *e);	//在第i个位置插入元素	*/
/*																		*/
/*	 //在指定的索引为i的位置删除元素e,并将之后的元素前移一位			*/
/*   BOOL ListDelete(List *list,int i,Elem *e);	//在删除第i个位置的元素	*/
/*																		*/
/*   void ListTraverse(List *list);				//遍历线性表(顺序表)	*/
/*																		*/
/* 创建日期:2019-03-11								 Author:Cyber Kaka  */
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "MyList2.h"
using namespace std;

int main(void)
{
	//3 5 7 2 9 1 8
	Coordinate e1(3,5);
	Coordinate e2(5,7);
	Coordinate e3(4,6);
	Coordinate e4(1,2);
	Coordinate e5(2,3);
	Coordinate e6(7,9);
	Coordinate e7(9,8);
	//检测函数
	List *list1 = new List(10);
	//查看元素个数
	cout << "length:" << list1->ListLength() << endl;

	list1->ListInsert(0, &e1);
	list1->ListInsert(1, &e2);
	list1->ListInsert(2, &e3);
	list1->ListInsert(3, &e4);
	list1->ListInsert(4, &e5);
	list1->ListInsert(5, &e6);
	list1->ListInsert(6, &e7);
	//查看元素个数
	cout << "length:" << list1->ListLength() << endl;
	//遍历线性表(顺序表)
	list1->ListTraverse();


	delete list1;
	list1 = NULL;

	system("pause");
	return 0;
}