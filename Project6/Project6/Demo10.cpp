#include <stdlib.h>
#include <string>
#include "MyArray10.h"
using namespace std;

int main(void)
{
	MyArray<int, 5, 6> arr;
	arr.display();//��display��ʱ��Ͳ���Ҫд������������

	system("pause");
	return 0;
}