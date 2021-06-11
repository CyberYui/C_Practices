#include <stdlib.h>
#include <iostream>
#include "MyLinkedList5.h"
#include "Node5.h"
using namespace std;

/************************************************************************/
/* ���Ա� -- ͨѶ¼
/*
/*	 ��ϵ����Ϣ:����  �绰
/*   //����ϵ����Ϣ��Ϊ������������д洢
/*
/*	 ���ܲ˵�:
/*		----------------
/*		| 1.�½���ϵ�� |
/*		| 2.ɾ����ϵ�� |
/*		| 3.���ͨѶ¼ |
/*		| 4.�˳�ͨѶ¼ |
/*		----------------
/*		| ������:
/************************************************************************/

int menu(int order);
void creatPerson(List *pList);
void deletePerson(List *pList);


int main(void)
{
	int userOrder = 0;

	List *pList = new List();

	while (userOrder!=4)
	{
		userOrder = menu(userOrder);
		switch (userOrder)
		{
		case 1:
			cout << "��ѡ����:�½���ϵ��...." << endl;
			creatPerson(pList);
			break;
		case 2:
			cout << "��ѡ����:ɾ����ϵ��...." << endl;
			deletePerson(pList);
			break;
		case 3:
			pList->ListTraverse();
			cout << "��ѡ����:���ͨѶ¼...." << endl;
			break;
		case 4:
			cout << "��ѡ����:�˳�ͨѶ¼...." << endl;
			break;
		default:
			break;
		}
	}
	
	delete pList;
	pList = NULL;

	system("pause");

	return 0;
}

int menu(int order)
{
	//��ʾͨѶ¼���ܲ˵�
	cout << "----------------" << endl;
	cout << "| 1.�½���ϵ�� |" << endl;
	cout << "| 2.ɾ����ϵ�� |" << endl;
	cout << "| 3.���ͨѶ¼ |" << endl;
	cout << "| 4.�˳�ͨѶ¼ |" << endl;
	cout << "----------------" << endl;
	cout << "| ������: " << endl;

	cin >> order;
	return order;
}


void creatPerson(List *pList)
{
	Node node;

	Person person;
	cout << "����������: " << endl;
	cin >> node.data.name;
	cout << "������绰: " << endl;
	cin >> node.data.phone;
	
	//����
	//cout << "����������: " << endl;
	//cin >> person.name;
	//cout << "������绰: " << endl;
	//cin >> person.phone;
	//node.data = person;
	//��Ϊ�Ѿ������=���������,��������ʹ��=��û�������

	//��node��������
	pList->ListInsertTail(&node);
}

void deletePerson(List *pList)
{
	Node node;
	//�½�һ��������Ϣ,�������������
	Person person;
	cout << "����������: " << endl;
	cin >> node.data.name;
	cout << "������绰: " << endl;
	cin >> node.data.phone;

	int pIndex = 0;
	//�ȶ�λ���
	pIndex=pList->LocateElem(&node);
	pList->ListDelete(pIndex-1, &node);
	cout << "ɾ�����" << endl;
}