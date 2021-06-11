#include <iostream>
#include <stdlib.h>
#include "MyStack3.h"
#include "Coordinate3.h"
using namespace std;

/************************************************************************/
/* ջ--��ģ��
	   Ҫ��:����ͨջ����Ϊ��ģ��ջ,ʹ������������κ���������
	   Ŀ��:�������ջ����,����������������ջ�е�Ӧ��
*/
/************************************************************************/

int main(void)
{
	//������һ����ģ��,����Ҫ���廯һ��,д��һ��ģ����
	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);

	pStack->push(Coordinate(1, 2));//��
	pStack->push(Coordinate(3, 4));
	pStack->push(Coordinate(5, 6));
	pStack->push(Coordinate(7, 8));
	pStack->push(Coordinate(9, 10));//��

	pStack->stackTraverse(true);

	delete pStack;
	pStack = NULL;
	//�����������͵������ܷ����
	MyStack<char> *qStack = new MyStack<char>(6);

	qStack->push('A');
	qStack->push('B');
	qStack->push('C');
	qStack->push('D');
	qStack->push('E');
	qStack->push('F');

	qStack->stackTraverse(false);


	delete qStack;
	qStack = NULL;

	system("pause");
	return 0;
}