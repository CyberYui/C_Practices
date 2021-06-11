#include <iostream>
#include <stdlib.h>
#include "Circle1.h"
#include "Rect1.h"
using namespace std;

/************************************************************************/
/* ��̬��̬���麯��
	   Ҫ��
		   1.����Shape��,��Ա����:calcArea(),���캯��,��������
		   2.����Rect��,��Ա����:calcArea(),���캯��,��������
						���ݳ�Ա:m_dWidth,m_dHeight
		   3.����Circle��,��Ա����:calcArea(),���캯��,��������
						  ���ݳ�Ա:m_dR
*/
/************************************************************************/

int main(void)
{
	/*//Part1
	Shape *shape1 = new Rect(3,6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	*/
	/*�����ԣ�ͨ��shape1��shape2���õĶ���shape��������㺯��
		Shape()
		Rect()
		Shape()
		Circle()
		Shape() --> calcArea()
		Shape() --> calcArea()
		~Shape()
		~Shape()
		�밴���������. . .
	*/
	//�޸ĸ���ļ��㺯��,����virtual�ؼ���,����ɲ���,����������
	Shape *shape1 = new Rect(3, 6);
	Shape *shape2 = new Circle(5);
	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;
	/*�޸�֮��Ϳ�������������
		Shape()
		Rect()
		Shape()
		Circle()
		Rect() --> calcArea()		//�������Ԥ��
		Circle() --> calcArea()
		~Shape()
		~Shape()
		�밴���������. . .
	*/

	system("pause");
	return 0;
}