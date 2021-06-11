#include <iostream>
#include <stdlib.h>
using namespace std;

//要求：提示用户输入一个整数，将该整数分别以8进制、10进制、16进制打印于屏幕上
//要求：提示用户输入一个布尔值(0或1),以布尔方式将值打印在屏幕上

int main(void)
{
	int x=0;
	cout << "请输入一个整数：" << endl;
	cin >> x;
	cout << oct << x << endl;//以八进制输出
	cout << dec << x << endl;//以十进制输出
	cout << hex << x << endl;//以十六进制输出

	cout << "请输入一个布尔值（0,1）：" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;//以布尔值输出

	system("pause");
	return 0;
}