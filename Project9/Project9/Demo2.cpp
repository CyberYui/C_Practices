/************************************************************************/
/* ���Ա� -- ˳���														*/
/*																		*/
/*   3 5 7 2 9 1 8														*/
/*																		*/
/*	 (ǰ��)Ԫ�ص�ǰһ��Ԫ��<---Ԫ��--->(���)Ԫ�صĺ�һ��Ԫ��			*/
/*																		*/
/* ˳���Ļ�������(C����)												*/
/*	 [ע]C�����е�*list��C++����ȫ������thisָ�����,					*/
/*		 �Ӷ����������ĳ�Ա����Ҳ����ֻ��Ҫ����������					*/
/*																		*/
/*	 BOOL InitList(List **list);	//�������Ա�(˳���)	���캯��	*/
/*	 void DestroyList(List *list);	//�������Ա�(˳���)	��������	*/
/*	 void ClearList(List *list);	//������Ա�(˳���)				*/
/*   BOOL ListEmpty(List *list);	//�ж����Ա�(˳���)�Ƿ�Ϊ��(��Ԫ��)*/
/*   int ListLength(List *list);	//��ȡ���Ա�(˳���)����(����)		*/
/*																		*/
/*	 //����һ��˳���list,�±�i,Ԫ�����ݸ�e,������e						*/
/*   BOOL GetElem(List *list,int i,Elem *e);	//��ȡָ��Ԫ��			*/
/*																		*/
/*	 //Ѱ�ҵ�һ������e������Ԫ�ص�λ��									*/
/*	 //����e,��list�������Ԫ��											*/
/*   int LocateElem(List *list,Elem *e);								*/
/*																		*/
/*	 //��ȡָ��Ԫ�ص�ǰ��												*/
/*	 //����˳���list,��ǰԪ��currentElem,ǰ������preElem,������		*/
/*   BOOL PriorElem(List *list,Elem *currentElem,Elem *preElem);		*/
/*																		*/
/*	 //��ȡָ��Ԫ�صĺ��												*/
/*	 //����˳���list,��ǰԪ��currentElem,��̸���nextElem,������		*/
/*   BOOL NextElem(List *list,Elem *currentElem,Elem *nextElem);		*/
/*																		*/
/*	 //��ָ��������Ϊi��λ�ò���Ԫ��e,����֮���Ԫ�غ���һλ			*/
/*   BOOL ListInsert(List *list,int i,Elem *e);	//�ڵ�i��λ�ò���Ԫ��	*/
/*																		*/
/*	 //��ָ��������Ϊi��λ��ɾ��Ԫ��e,����֮���Ԫ��ǰ��һλ			*/
/*   BOOL ListDelete(List *list,int i,Elem *e);	//��ɾ����i��λ�õ�Ԫ��	*/
/*																		*/
/*   void ListTraverse(List *list);				//�������Ա�(˳���)	*/
/*																		*/
/* ��������:2019-03-11								 Author:Cyber Kaka  */
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
	//��⺯��
	List *list1 = new List(10);
	//�鿴Ԫ�ظ���
	cout << "length:" << list1->ListLength() << endl;

	list1->ListInsert(0, &e1);
	list1->ListInsert(1, &e2);
	list1->ListInsert(2, &e3);
	list1->ListInsert(3, &e4);
	list1->ListInsert(4, &e5);
	list1->ListInsert(5, &e6);
	list1->ListInsert(6, &e7);
	//�鿴Ԫ�ظ���
	cout << "length:" << list1->ListLength() << endl;
	//�������Ա�(˳���)
	list1->ListTraverse();


	delete list1;
	list1 = NULL;

	system("pause");
	return 0;
}