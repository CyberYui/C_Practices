#include <iostream>
#include <stdlib.h>
using namespace std;

template<typename T>//T只是Type的意思
void display(T a)
{
	cout << a << endl;
}

template<typename T,class U>
void display(T t, U u)
{
	cout << t << "," << u << endl;
}

template<typename T,int size>
void display(T a)
{
	for (int i=0;i<size;i++)
	{
		if (i==(size-1))
		{
			cout << a << endl;
		}
		else
		{
			cout << a;
		}
	}
}

int main(void)
{
	display<int>(10);
	display<double>(10.89);
	display<int, double>(5, 8.3);
	display<int,char>(20, 'A');
	display<int, 10>(3);

	system("pause");
	return 0;
}