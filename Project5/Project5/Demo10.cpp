#include <iostream>
#include <stdlib.h>
#include "IndexException10.h"
using namespace std;

/************************************************************************/
/* �쳣����:
		1.����һ��Exception��,��Ա����:printException,��������
		2.����һ��IndexException��,��Ա����:printException
*/
/************************************************************************/

//����һ���򵥵ĺ����׳��쳣
void test()
{
	//throw 10;
	//throw 0.1;//һ����˵�׳�����һ��������
	//throw IndexException();
	throw "wa!";
}

int main(void)
{
	//ͨ��try+catch�γ��쳣����
	try
	{
		test();
	}
	catch (int)
	{
		cout << "int Exception!" << endl;
	}
	catch (double &e)//�쳣��&e�ǿ�����������ģ�ע��ؼ��ּ���
	{
		cout << e << endl;//������ֱ�Ӵ�ӡ��0.1��ֵ
	}
	catch (IndexException &e)//����catch (Exception &e)Ҳ�ǿ��Ե�
	{
		e.printException();
	}
	catch (...)//��������
	{
		cout << "��������" << endl;
	}

	system("pause");
	return 0;
}