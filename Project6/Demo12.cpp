#include <iostream>
#include <stdlib.h>
#include <string>
//导入三个标准模版库的头文件
#include <vector>
#include <list>
#include <map>
using namespace std;

int main(void)
{
	//先用vector定义数组
	vector<int> vec;//这样就定义了一个向量
	vec.push_back(3);
	vec.push_back(6);
	vec.push_back(9);

	//cout << vec.size() << endl;//打印出数据个数
	//vec.pop_back();//最尾部元素擦除
	//cout << vec.size() << endl;//打印出数据个数

	//遍历向量
	//for (int i=0;i<vec.size();i++)
	//{
	//	cout << vec[i] << endl;
	//}			//这样可以遍历向量内容

	//以下使用迭代器遍历
	vector<int>::iterator itor=vec.begin();//迭代器拿到向量的第一个元素
	//cout << *itor << endl;//打印出数据
	//使用迭代器遍历,与上面的遍历结果一样
	for (;itor!=vec.end();itor++)
	{
		cout << *itor << endl;
	}

	cout << vec.front() << endl;//打印出第一个元素
	cout << vec.back() << endl;//打印出最后一个元素

	cout << "************************************" << endl;

	list<int> list1;
	list1.push_back(4);
	list1.push_back(7);
	list1.push_back(9);
	//对于链表,使用普通的遍历方法是不可以的
	//for (int i=0;i<list1.size();i++)
	//{
	//	cout << list1[i] << endl;
	//	//error C2676: 二进制“[”:“std::list<int,std::allocator<_Ty>>”
	//	//不定义该运算符或到预定义运算符可接收的类型的转换
	//}
	//必须使用迭代器遍历
	list<int>::iterator itor1 = list1.begin();
	for (;itor1!=list1.end();itor1++)
	{
		cout << *itor1 << endl;
	}

	cout << "************************************" << endl;

	map<int, string> m;
	pair<int, string> p1(1, "Jim");
	pair<int, string> p2(6, "Cyber");

	//m.push_back(p1);//在映射中是没有push_back函数的
	m.insert(p1);
	m.insert(p2);
	//通过索引访问
	cout << m[1] << endl;
	cout << m[6] << endl;
	cout << "************************************" << endl;
	//通过迭代器访问遍历
	map<int,string>::iterator itor2 = m.begin();
	for (;itor2!=m.end();itor2++)
	{
		//cout << *itor2 << endl;
		//由于映射是成对的内容,仅仅一个指针并不能告诉计算机应该输出哪一个内容
		//所以需要用特别的方式分别输出
		cout << itor2->first << endl;
		cout << itor2->second << endl;
	}
	cout << "************************************" << endl;
	//也可以用string做key
	map<string, string> m1;
	pair<string, string> p3("Hello", " world");
	pair<string, string> p4("Welcome", " you");
	m1.insert(p3);
	m1.insert(p4);
	cout << m1["Hello"] << endl;//要知道这样的形式也是可以提取数据的
	map<string, string>::iterator itor3 = m1.begin();
	for (;itor3!=m1.end();itor3++)
	{
		cout << itor3->first << endl;
		cout << itor3->second << endl;
	}

	system("pause");
	return 0;
}