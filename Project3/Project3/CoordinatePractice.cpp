/*��Ԫ����

����һ�������࣬
��ջ��ʵ���������ೣ����
���������꣨3��5����
Ȼ���峣���á���ָ�룬
���ʹ�ö������á�ָ��ֱ�ͨ��������Ϣ��ӡ������ӡ������Ϣ��

��ӡ�������
			(3,5)
			(3,5)
			(3,5)
*/
	#include <iostream>
	#include <stdlib.h>
	using namespace std;

	//�ȶ�����
	class Coordinate
	{
	public:
		Coordinate(int x, int y)
		{
			//����x��y
			m_iX = x;
			m_iY = y;
		}
		//ʵ�ֳ���Ա����
		void printInfo() const
		{
			cout << "(" << m_iX << "," << m_iY << ")" << endl;
		}
	private:
		int m_iX;
		int m_iY;
	};

	int main(void)
	{
		const Coordinate coor(3, 5);
		//������ָ��p
		const Coordinate *p = &coor;
		//����������c
		const Coordinate &c = coor;

		coor.printInfo();
		p->printInfo();
		c.printInfo();

		system("pause");
		return 0;
	}