/************************************************************************/
/* Teacher�ࣺ                                                          */
/*       �Զ����в�Ĭ�Ϲ��캯��                                         */
/*       ʹ�ó�ʼ���б��ʼ������                                       */
/*     ���ݣ�                                                           */
/*          ����                                                        */
/*          ����                                                        */
/*     ��Ա������                                                       */
/*           ���ݳ�Ա�ķ�װ����                                         */
/*                                                                      */
/*     ��չ��                                                           */
/*           ������Դ����ѧ���ĸ�������Ϊ����                         */
/*                                                                      */
/************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string>
#include "InitTableDemo.h"
using namespace std;

int main(void)
{
	Teacher t1;
	cout << t1.getName() << " " << t1.getAge() << " " << t1.getNum() << endl;
	//��һ�ַ�ʽ��ʼ������
	Teacher t2("Merry", 22);
	cout << t2.getName() << " " << t2.getAge() << " " << t2.getNum() << endl;
	//�鿴�Ƿ������ó�ʼ���б���Ƴ���
	Teacher t3("James", 32, 20);
	cout << t3.getName() << " " << t3.getAge() << " " << t3.getNum() << endl;
	system("pause");
	return 0;
}