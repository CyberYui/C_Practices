#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	//new��delete��ʹ�÷���
	/*����һ���ڴ�

	//����һ��int�ڴ棬����ʼ��20���ֵ

	//����������
	//int *p = new int(20);

	//���߿�������:
	//int *p = new int;
	//*p = 20;
	//cout << *p << endl;
	//delete p;
	//p = NULL;
	
	//ʵ�ʲ�����
	int *p = new int;
	if (NULL==p)//����Ƿ�����ɹ��ڴ�
	{
		//ʧ�ܾ��˳�
		system("pause");
		return 0;
	}
	//�ɹ��͸�ֵ���������
	*p = 20;
	cout << *p << endl;
	//�ͷ��ڴ棬������ֵ
	delete p;
	p = NULL;

	*/

	/*������ڴ�
	//ʵ�ʲ�����
	int *p = new int[1000];
	if (NULL==p)//����Ƿ�����ɹ��ڴ�
	{
		//ʧ�ܾ��˳�
		system("pause");
		return 0;
	}
	//�����뵽�ĵط���ֵ
	p[0] = 10;
	p[1] = 20;
	//��������Ƿ�ɹ�
	cout << p[0] << " , " << p[1] << endl;
	//�ͷ��ڴ�飬������ֵ
	delete []p;//һ��Ҫ��������
	p = NULL;
	*/
	system("pause");
	return 0;
}