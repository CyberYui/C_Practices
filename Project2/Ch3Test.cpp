//Ch3Test
#include <iostream>
using namespace std;
int main(void)
{
	//���峣��count
	const int count = 3;
	//int const *const p = &count;ͬ������һ��һ����Ч��
	const int *const p = &count;//������˼��pָ��count������pָ�����count
	//��ӡcount���ַ���Hello C++
	for (int i = 0; i < *p; i++)
	//����i<*p��ʵ����i<count����˼
	//ע�⣺for(int i = 0; i < p; i++)�Ǵ���ģ�p��ָ�룬һ��Ҫ��*
	{
		cout << "Hello C++" << endl;
	}
	system("pause");
	return 0;
}