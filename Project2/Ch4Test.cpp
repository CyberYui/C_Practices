/*��Ԫ����

ʹ�ú�����������ɷ������ֵ�ķ�����

������һ�����飬����һ������getMax()�����ú��������أ��ֱ�ʵ�֣�

1������ȡ�������е�����Ԫ�أ���������getMax()�У����Է��ؽϴ��һ��Ԫ�ء�

2�����������鴫������getMax()�У����Է�������������һ��Ԫ�ء�

*/
#include <iostream>
using namespace std;
//��������
int getMax(int a, int b);
int getMax(int arr[], int count);

int main(void)
{
	//����int���鲢��ʼ��
	int numArr[3] = { 3, 8, 6 };

	//�Զ�����int getMax(int a, int b)
	cout << getMax(numArr[0], numArr[2]) << endl;

	//�Զ����÷������������ֵ�ĺ������������е����ֵ
	cout << getMax(numArr, 3) << endl;
	system("pause");
	return 0;
}

/**
  *�������ܣ�����a��b�����ֵ
  *a��b����������
  */
int getMax(int a, int b)
{
	return a > b ? a : b;
}

/**
  * �������ܣ����������е����ֵ
  * arr����������
  * count�����鳤��
  * �ú����Ƕ����溯��������
  */
int getMax(int arr[], int count)
{
	//����һ����������ȡ����ĵ�һ��Ԫ��
	int maxNum = arr[0];
	for (int i = 1; i < count; i++)
	{
		//�Ƚϱ�������һ��Ԫ�صĴ�С
		if (arr[i] > maxNum)
		{
			//��������е�Ԫ�ر�maxNum�����ȡ�����е�ֵ
			maxNum = arr[i];
		}
	}
	return maxNum;
}