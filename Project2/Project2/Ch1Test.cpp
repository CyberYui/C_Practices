/****************C++ Practice 3******************/
/*֪ʶ�㣺bool���� �����ռ� �������            */
/*��ĿҪ��                                    */
/*ʹ��һ�������ҳ�һ�����������е����ֵ����Сֵ*/
/************************************************/
#include <iostream>
using namespace std;

//���ȶ���Ѱ�����ֵ����Сֵ�ĺ���
//�����Ĳ�����Ҫ��һ�����飬һ���������ڱ�ʾ�м�������һ��flag
namespace A
{
	int getMaxOrMin(int *arr, int count, bool isMax)
	{
		int temp = arr[0];
		//�����Ǵӵ�һ��������ʼ�ģ��ʿ���ֱ��������һ������ʼ�Ƚ�
		for (int i = 1; i < count; i++)
		{
			if (isMax = true)//������Զ���Ϊ1��true��0��false
			{
				if (temp < arr[i])
				{
					temp = arr[i];
				}
			}
			else
			{
				if (temp > arr[i])
				{
					temp = arr[i];
				}
			}
		}
		return temp;
	}
}


int main(void)
{
	int arr[4] = { 3,5,7,1 };//�պ����������Ҳ��̬��
	bool isMax;
	cout << "�������Ƿ�Ҫ�����ֵ(1��0��):" << endl;
	cin >> isMax;
	cout << A::getMaxOrMin(arr, 4, isMax) << endl;
	system("pause");
	return 0;
}