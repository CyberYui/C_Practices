#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	// ʹ��vector�洢���֣�3��4��8��4
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(8);
	vec.push_back(4);

	//ѭ����ӡ����
	vector<int>::iterator itor = vec.begin();
	for (; itor != vec.end(); itor++)
	{
		cout << *itor << endl;
	}

	// ʹ��map���洢�ַ�����ֵ��
	map<string, string> m;
	pair<string, string> p1("S", "Shanghai");
	pair<string, string> p2("B", "Beijing");
	pair<string, string> p3("G", "Guangzhou");

	m.insert(p1);
	m.insert(p2);
	m.insert(p3);

	map<string, string>::iterator itor1 = m.begin();
	// ��ӡmap������
	for (; itor1 != m.end(); itor1++)
	{
		cout << itor1->first << endl;
		cout << itor1->second << endl;
	}
	return 0;
}