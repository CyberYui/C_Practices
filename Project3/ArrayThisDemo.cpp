/************************************************************************/
/*  ʾ��Ҫ��:                                                           */
/*      ����һ��Array��                                                 */
/*      ���ݳ�Ա��m_iLen��ʾ���鳤��                                    */
/*      ��Ա���������캯��			                                    */
/*                ��������                                              */
/*                len�ķ�װ����                                         */
/*                ��Ϣ�������printInfo                                 */
/*  ʾ��Ŀ�ģ�                                                          */
/*      �˽�thisָ����÷���������֮��                                  */
/************************************************************************/
#include <iostream>
#include <stdlib.h>
#include "ArrayThisF.h"
using namespace std;

int main(void)
{
	Array arr1(10);
	//cout << arr1.getLen() << endl;
	//arr1.printInfo();
	//thisָ�뷵�ع���֮�󣬿����������ķ�����д����
	arr1.printInfo().setLen(5);
	//ʹ�������ĵ�ţ�ʵ���˷���������ʵ�֣������thisָ���һ������
	//cout << "len=" << arr1.getLen() << endl;
	/*
		Array(int len)
		len=10
		~Array()
		len=10

		�����������ﲢû�иı�arr1��lenֵ
		ԭ���Ƿ��ص�*this�����һ����ʱ��Array����
	*/
	//�޸���printInfo���������,�͸ı���arr1.len��ֵ
	cout << "len=" << arr1.getLen() << endl;
	arr1.printThis();//��ӡthisָ��ĵ�ַ
	//�ٴ�ӡһ��arr1�ĵ�ֵַ����
	cout << "arr1=" << &arr1 << endl;
	//��������ᷢ�������ĵ�ַ��һģһ����

	system("pause");
	return 0;
}

/*
	Array& Array::printInfo()
	�������Ը�дΪ
	Array* Array::printInfo()
	����ֻ��Ҫ��arr1.printInfo().setLen(5);дΪ
	arr1->printInfo()->setLen(5);
	���ɵõ�ͬ���Ľ��
*/