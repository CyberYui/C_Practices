#include <iostream>
#include <stdlib.h>
using namespace std;

//����һ�������ࣺ
//���ݳ�Ա��x��y
//��Ա�������ֱ��ӡx��y��ֵ
class Coordinate 
{	//���������ܿ�����Ĺ���
	//coordinate vt.ʹ���ͣ�ʹЭ�������䣬����
	public:
		int x;
		int y;
		void printX()
		{
			cout << "x:" << x << endl;
		}
		void printY()
		{
			cout << "y:" << y << endl;
		}
};

int main(void)
{
	Coordinate coor;//ʵ����ջ����
	coor.x = 10;//�������x��y�ֱ�ֵ
	coor.y = 20;
	coor.printX();
	coor.printY();

	Coordinate *p = new Coordinate();//ʵ�����Ѷ���
	if (NULL == p)//�ж������ڴ��Ƿ�ɹ�
	{
		//failed
		return 0;
	}
	p->x = 100;//�������x��y�ֱ�ֵ
	p->y = 200;
	p->printX();
	p->printY();

	system("pause");
	delete p;//�ͷ��ڴ�
	p = NULL;//�յ�����

	return 0;
}