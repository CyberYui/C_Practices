#include <stdlib.h>
#include <iostream>
#include "MyLinkedList4.h"
#include "Node4.h"
using namespace std;

/************************************************************************/
/* ���Ա� -- ͨѶ¼
/*
/*	 ��ϵ����Ϣ:����  �绰
/*   //����ϵ����Ϣ��Ϊ������������д洢
/*
/*   ��Ա����:
/*     BOOL InitList(List **list);	//�������Ա�(������)
/*     void DestroyList(List *list);//�������Ա�(������)
/*     void ClearList(List *list);  //������Ա�(������)
/*     BOOL ListEmpty(List *list);  //�ж����Ա�(������)�Ƿ�Ϊ��
/*     int ListLength(List *list);  //��ȡ���Ա�(������)����
/*     BOOL GetElem(List *list,int i,Elem *e);  //��ȡָ��Ԫ��
/*
/*     //Ѱ�ҵ�һ������e������Ԫ�ص�λ��
/*     int LocateElem(List *list,Elem *e);
/*
/*	   //��ȡָ��Ԫ�ص�ǰ��
/*     BOOL PriorElem(List *list,Elem *currentElem,Elem *preElem);
/*
/*	   //��ȡָ��Ԫ�صĺ��
/*     BOOL NextElem(List *list,Elem *currentElem,Elem *nextElem);
/*
/*     BOOL ListInsert(List *list,int i,Elem *e);    //�ڵ�i��λ�ò���Ԫ��
/*     BOOL ListDelete(List *list,int i,Elem *e);    //ɾ����i��λ�õ�Ԫ��
/*     void ListTraverse(List *list);                //�������Ա�(������)
/*
/*     BOOL ListInsertHead(List *list,Node *pNode);	 //��ͷ������
/*     BOOL ListInsertTail(List *list,Node *pNode);	 //��β������
/*
/* ѭ�������˫�����������
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