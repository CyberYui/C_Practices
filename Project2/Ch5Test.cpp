/*��Ԫ����

�ڶ�������100��char���͵��ڴ棬
����Hello imooc�ַ���������Ķ��е��ڴ���,
��ӡ�ַ���,����ͷ��ڴ档

*/

#include <string.h>
#include <iostream>
using namespace std;
int main(void)
{
	//�ڶ�������100��char���͵��ڴ�
	char *str = new char[100];//һ��������new
	//����Hello C++�ַ���������Ķ��е��ڴ���
	strcpy(str, "Hello C++");//���������������ƣ�����ָ��
	//��ӡ�ַ���
	cout << str << endl;//��ӡ�������飬����ָ�룬ָ��ָֻ��һ��Ԫ��
	//�ͷ��ڴ�
	delete[]str;
	str = NULL;
	return 0;
}