/*C++  Practice  2*/
#include <iostream>
#include <stdlib.h>
using namespace std;//ʹ�������ռ�std

namespace A 
{
	int x = 1;
	void fun()
	{
		cout << "A" << endl;
		//��Ȼ����û��ʹ��std�����ռ�ʱ��������std::cout֮��ķ�ʽ
	}
}
namespace B
{
	int x = 7;
	void fun()
	{
		cout << "B" << endl;
	}
	void fun2()
	{
		cout << "Example" << endl;
	}
}

using namespace B;//�����Ϳ���Ĭ����B�ռ�Ķ����ˣ�������ҪB::��ȷ���ռ�
int main(void)
{
	cout << "hello" << endl;
	//����A�ռ��x
	cout << A::x << endl;
	//����B�ռ��fun����
	B::fun();//cout<<B::fun()<<endl;�Ǵ����ʹ�÷�ʽ
	//����B�ռ��fun2����
	fun2();
	system("pause");
	return 0;
}