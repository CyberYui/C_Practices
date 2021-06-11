#include <iostream>
#include <stdlib.h>
#include "Circle2.h"
#include "Rect2.h"
using namespace std;

/************************************************************************/
/* ����������
	   Ҫ��:
			1.����Shape��,��Ա����:calcArea(),���캯��,��������
			2.����Rect��,��Ա����:calcArea(),���캯��,��������
						 ���ݳ�Ա:m_dWidth,m_dHeight
			3.����Circle��,��Ա����:calcArea(),���캯��,��������
						   ���ݳ�Ա:m_dR,m_pCenter
			4.����Coordinate��,��Ա����:calcArea(),���캯��,��������
							   ���ݳ�Ա:m_iX,m_iY
*/
/************************************************************************/

int main(void)
{
	/*
	Shape *shape1 = new Rect(3, 6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	*/
	//����֮��ᷢ�ֽ���ִ��������Shape����������
	//��û��ִ��Circle��������������������ڴ�й©

	//�����ʽ�Ǹ�Shape������������(�Ǳ�Ҫ)Circle�������������virtual�ؼ���
	Shape *shape1 = new Rect(3, 6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	/*���н��,�ɼ��Ѿ���ʼִ�������������������
		Shape()
		Rect()
		Shape()
		Circle()
		Coordinate()
		Rect() --> calcArea()
		Circle() --> calcArea()
		~Rect()
		~Shape()
		~Circle()
		~Coordinate()
		~Shape()
	*/

	//һЩ֪ʶ
	/*
	1.���캯������ʹ��virtual����
	2.��ͨ��������ʹ��virtual����
	3.��̬(static)��Ա��������ʹ��virtual����
	3.������������ʹ��virtual���ε�,���ǻᵼ��inline�ؼ��ֱ�����
	*/

	system("pause");
	return 0;
}