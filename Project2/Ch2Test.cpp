/*单元巩固

相信大家对引用有一定的了解了，那么下面来巩固一下吧。

定义一个引用y，y是x的引用，然后打印x和y的值。
将y的值更改之后再次打印，x和y的值。

*/
//比起上一个cpp文件，这个测试更为简单
#include <iostream>
using namespace std;
int main(void)
{
	int x = 3;
	//定义引用，y是x的引用
	int &y = x;
	//打印x和y的值
	cout << x << "," << y << endl;
	//修改y的值
	y = 6;
	//再次打印x和y的值
	cout << x << "," << y << endl;
	return 0;
}