/*����20

С����дһ��ʵ������Ԫ�صĲ��ҹ��ܵ�С���򣬵�����Щ�ط�������ôд�ˣ���������ư�

�ڴ���༭���У�

9-13���Լ�22����д��ȷ����

���н��Ϊ

	8�������д��ڣ��±�Ϊ��3

*/


#include <stdio.h>
int getIndex(int arr[5], int value)
{
	int i;
	int index;
	for (i = 0; i < 5; i++)
	{
		/* �����ѯ���� */
		if (arr[i] == value)
		{
			index = i;//ֻҪ�У��ͽ�indexֵ�ı䣬������ѭ��
			break;
		}
		else
		{
			index = -1;//û�У��ͽ�indexֵ��Ϊ-1��������ѭ����ֱ���ҵ���ͬԪ�ػ�ѭ������
		}
	}
	return index;
}

int main()
{
	int arr[5] = { 3,12,9,8,6 };
	int value = 8;
	int index = getIndex(arr, value);      //���ݶ��庯�����ݲ���
	if (index != -1)//index��ֵ�����flagһ���������ж�
	{
		printf("%d�������д��ڣ��±�Ϊ��%d\n", value, index);
	}
	else
	{
		printf("%d�������в����ڡ�\n", value);
	}
	return 0;
}