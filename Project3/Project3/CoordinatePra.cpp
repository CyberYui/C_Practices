/************************************************************************/
/* �����Ա��                                                           */
/*     Ҫ��                                                           */
/*         ���������ࣺ                                                 */
/*             �����ࣺCoordinate                                       */
/*                 ���ݳ�Ա��������m_iX                                 */
/*                           ������m_iY								    */
/*                 ��Ա���������캯�����������������ݷ�װ����           */
/*                                                                      */
/*             �߶��ࣺLine                                             */
/*                 ���ݳ�Ա����A m_coorA                                */
/*                           ��B m_coorB                                */
/*                 ��Ա���������캯��������������						*/
/*                           ���ݷ�װ��������Ϣ��ӡ����                 */
/************************************************************************/


#include <iostream>
#include <stdlib.h>
#include "LinePra.h"
using namespace std;

int main(void)
{
	//Plan A
	//����һ��Line��ָ��p,���ž����ٵ���������������˳��
	//Line *p = new Line();
	//delete p;
	//p = NULL;
	/*��˳��,���Կ����Ǻ���ȳ�
		Coordinate()	//�ȵ������������๹�캯��
		Coordinate()
		Line()			//����һ���߶���Ĺ��캯��
		~Line()			//�����߶ζ���
		~Coordinate()	//�����������
		~Coordinate()
	*/
	//Plan A end;

	//��Ϊһ���߶Σ�����ϣ������ʱ�Ͱ�����ĵ�Ҳȷ������
	//�����Ҫ����һЩ������
	//����˳��1.CoordinateSecond.h    2.CoordinateSecond.cpp    ����:���캯��
	//		  3.CoordinateSecond.cpp�й��캯�����������������
	//		  4.LinePra.h       5.LinePra.cpp       ����:���캯��
	//Line�Ĺ��캯���ǲ��øı�����ģ���ΪLine�ʹ�����һ��
	
	//Plan B
	Line *p = new Line(1,2,3,4);
	//��������Ե���һ��Line���������
	p->printInfo();

	delete p;
	p = NULL;
	/*��˳��,���׿����Ǻ���ȳ�
		Coordinate()    (1,2)	//ʵ������A
		Coordinate()    (3,4)	//ʵ������B
		Line()
		~Line()
		~Coordinate()    (3,4)	//������B
		~Coordinate()    (1,2)	//������A
	*/
	system("pause");
	return 0;
}