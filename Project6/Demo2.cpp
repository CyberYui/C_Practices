/*��Ԫ����
����Coordinate�࣬����ȫ��display��������ΪCoordinate�����Ԫ����
Coordinate�����ݳ�Աm_iX��m_iY

display����������ʾm_iX��m_iY
*/

#include <iostream>
using namespace std;

/**
 * ����Coordinate��
 * ��Ԫ������display
 * ���ݳ�Ա��m_iX��m_iY
 */
class Coordinate
{
	// ��Ԫ����
	friend void display(Coordinate &coor);
public:
	Coordinate(int x, int y)
	{
		m_iX = x;
		m_iY = y;
	}
public:
	int m_iX;
	int m_iY;
};

/**
 * display����������ʾm_iX��m_iY��ֵ
 */
void display(Coordinate &coor)
{
	cout << "m_iX��" << coor.m_iX << endl;
	cout << "m_iY��" << coor.m_iY << endl;
}

int main(void)
{
	// ʵ����Coordinate����
	Coordinate coor(1,2);
	// ����display����
	display(coor);
	return 0;
}