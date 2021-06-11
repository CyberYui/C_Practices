#include <stdlib.h>
#include <string>
#include "MyArray10.h"
using namespace std;

int main(void)
{
	MyArray<int, 5, 6> arr;
	arr.display();//用display的时候就不需要写尖括号内容了

	system("pause");
	return 0;
}