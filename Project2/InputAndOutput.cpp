#include <iostream>
#include <stdlib.h>
using namespace std;

//Ҫ����ʾ�û�����һ�����������������ֱ���8���ơ�10���ơ�16���ƴ�ӡ����Ļ��
//Ҫ����ʾ�û�����һ������ֵ(0��1),�Բ�����ʽ��ֵ��ӡ����Ļ��

int main(void)
{
	int x=0;
	cout << "������һ��������" << endl;
	cin >> x;
	cout << oct << x << endl;//�԰˽������
	cout << dec << x << endl;//��ʮ�������
	cout << hex << x << endl;//��ʮ���������

	cout << "������һ������ֵ��0,1����" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;//�Բ���ֵ���

	system("pause");
	return 0;
}