#include "Coordinate7.h"
#include <iostream>
using namespace std;

/************************************************************************/
/* ��������� ---- ��Ԫ���������
		Ҫ��:����Coordinate������
			��Ա����:���캯��,getX,getY
			���ݳ�Ա:m_iX,m_iY
		1.+�����������(��Ա����,��Ԫ����)
		2.<<������������
		3.[]�������������
*/
/************************************************************************/

int main(void)
{
	Coordinate coor1(1, 3);
	Coordinate coor2(0, 4);
	Coordinate coor3(0, 0);

	coor3 = coor2 + coor1;
	//cout << coor3.getX() << "," << coor3.getY() << enld;
	cout << coor3 << endl;//Ч�����Ͼ�һ��

	//�����������������
	cout << coor3[0] << endl;
	cout << coor3[1] << endl;

	system("pause");
	return 0;
}