#ifndef NODEFIFTH_H
#define NODEFIFTH_H

#include "Person5.h"

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

#endif // NODEFIFTH_H
