/***************************************************/
/*		����һ��Teacher��                          */
/*				�Զ����޲ι��캯��                 */
/*				�Զ����вι��캯��				   */
/*		���ݳ�Ա��								   */
/*				����                               */
/*				����							   */
/*		��Ա������								   */
/*				���ݳ�Ա�ķ�װ����				   */
/*												   */
/*			���ף������������ⶨ���д������	   */
/***************************************************/
#include <iostream>
#include <stdlib.h>
#include <string>
#include "ConFunDemo.h"
//ֻ�����ͷ�ļ����Ϳ���ʹ�õ�������ͬͷ�ļ���cpp�ļ�
using namespace std;

int main(void)
{
	Teacher t1;//�����޲ι��캯��
	cout << "����������������" << endl;
	cout << t1.getName() << " " << t1.getAge() << endl;//���t1������
	Teacher t2("Cyber", 24);//�����вι��캯��
	cout << "����������������" << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;//���t2������
	Teacher t3("Merry");//�����вι��캯��
	cout << t3.getName() << " " << t3.getAge() << endl;//���t3������

	system("pause");
	return 0;
}