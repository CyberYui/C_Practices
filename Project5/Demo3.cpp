#include <iostream>
#include <stdlib.h>
#include "Circle3.h"
#include "Shape3.h"
using namespace std;

/************************************************************************/
/* �麯����
		1.����Shape��,��Ա����:���캯��,��������,calcArea()
		2.����Circle��,��Ա����:���캯��,��������
					   ���ݳ�Ա:m_iR

	����˵��:1.����Ĵ�С:����ʵ�������Ķ�����,�������ݳ�Ա��ռ�ݵĻ����ڴ浥Ԫ�Ĵ�С
			 2.����ĵ�ַ:��ͨ����ʵ�����Ķ���,����ռ�ڴ浥Ԫ�ĵ�һ����ַ
			 3.�����Ա�ĵ�ַ:ʵ�����Ķ���,��ÿһ�����ݳ�Ա��ռ�ݵĵ�ַ
			 4.�麯����ָ��:�ھ����麯���������,ʵ����һ������,���һ���ڴ�洢��ָ��ָ���麯����,���麯����ָ��
*/
/************************************************************************/

int main(void)
{

	//Shape shape;
	//cout << sizeof(shape) << endl;//��ӡ���Ĵ�С��1

	//int *p = (int *)&shape;//ǿ������ת������shape����ת��Ϊint��
	//cout << p << endl;//��ӡshape�ĵ�ַ
	//cout << (unsigned int)(*p) << endl;//���޷���������ʽ��ӡpָ��ĵ�ַ

	//Circle circle(100);
	//cout << sizeof(circle) << endl;

	//int *q=(int *)&circle;//ǿ������ת��
	//cout << q << endl;//��ӡcircle�ĵ�ַ
	//cout << (unsigned int)(*q) << endl;
	//q++;
	//cout << (unsigned int)(*q) << endl;

	//����Ϊ���麯����ʵ������
	//����ʵ���麯�����,�޸���Shape3.h-->calcArea()
	//Shape shape;//�޸�֮�������,�����Ĵ�С,��Ϊ4,��֤�����麯����ָ��
	//cout << sizeof(shape) << endl;

	//����ʵ���������������
	//Shape shape;//ʵ����ʱ�����麯����ָ��,��СҲΪ4
	//cout << sizeof(shape) << endl;
	//֤������������Ҳ����ʵ����ʱ����һ���麯����ָ��

	//����ʵ��Shape��Circleͬʱ�е�״��
	Shape shape;
	cout << sizeof(shape) << endl;
	Circle circle(100);
	cout << sizeof(circle) << endl;
	//�ɼ�circleʵ����ʱ��СΪ8,���麯����ָ��+����int m_iR�Ĵ�С

	system("pause");
	return 0;
}