#ifndef NODEFOURTH_H
#define NODEFOURTH_H

#include "Person4.h"

//�����struct������,����Ҫ��дpublic,��ΪĬ�ϵľ���public
class Node
{
public:
	void printNode();
	//Node������������һ��int���ͱ�����
	//Ӧ����һ��Person����
	//int data;//������
	Person data;
	Node *next;//ָ����,ָ����һ�����
};

#endif // NODETHIRD_H
