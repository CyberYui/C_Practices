/*����21

���������ж����������ַ������������
s1��s2��s3������ַ���������
ʹ��printf��ʽ�����������s1��ʹ����Ϊ

	�Ұ�,Ľ����

*/

#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = "";
	char s2[] = "�Ұ�,";
	char s3[] = "Ľ����";
	/*��ȫ����*/
	strcpy(s1, s2);//����Ҳ��ʹ��strcat(s1,s2)��Ч��һ��
	strcat(s1, s3);
	printf("%s\n", s1);
	return 0;
}