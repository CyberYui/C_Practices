/************************************************************************/
/* �������Ա����������������	                                        */
/*     Ҫ��                                                           */
/*           ���������ࣺ                                               */
/*               �����ࣺCoordinate			                            */
/*               ���ݳ�Ա��������m_iX��������m_iY                       */
/*               ��Ա���������캯�����������������ݷ�װ����	            */
/*                                                                      */
/*               �߶���:Line                                            */
/*               ���ݳ�Ա����A  m_coorA����B  m_coorB                   */
/*               ��Ա���������캯�����������������ݷ�װ����             */
/*                         ��Ϣ��ӡ����                                 */
/************************************************************************/
#include <iostream>
#include <stdlib.h>
#include "LineThird.h"
using namespace std;

int main(void)
{
	//ʵ�����µ�Line����
	Line line(1, 2, 3, 4);
	line.printInfo();//���Է������line��û������printInfo() const��
	cout << "������ͬ��line" << endl;
	const Line line2(5, 6, 7, 8);
	line2.printInfo();//�����ǳ��������Ե����˳���Ա����

	system("pause");
	return 0;
}
/*
	Coordinate(int x, int y)��(1,2)			//��ʼ���б����ݣ����õ㹹�캯��
	Coordinate(int x, int y)��(3,4)			//�����A��B������
	Line() start							//��ʼ���б���ɺ�ſ�ʼ�����߶�
	Line() end
	������ͨ��Ա����printInfo()�Ľ��		//�ǳ������߶ε�printInfo
	(1,2)
	(3,4)
	������ͨ��Ա�����Ľ�β��
	������ͬ��line							//�ָ���
	Coordinate(int x, int y)��(5,6)			//�������߶δ����A��B
	Coordinate(int x, int y)��(7,8)
	Line() start
	Line() end
	���ǳ���Ա����printInfo() const�Ľ����	//�������߶ε�printInfo
	(5,6)
	(7,8)
	���ǳ���Ա�����Ľ�β��
	�밴���������. . .						//system("pause");
	~Line()									//��ʼ�������������ɼ�ջ�Ǻ���ȳ�
	~Coordinate()��(7,8)
	~Coordinate()��(5,6)
	~Line()
	~Coordinate()��(3,4)
	~Coordinate()��(1,2)
*/