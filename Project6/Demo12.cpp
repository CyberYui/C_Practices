#include <iostream>
#include <stdlib.h>
#include <string>
//����������׼ģ����ͷ�ļ�
#include <vector>
#include <list>
#include <map>
using namespace std;

int main(void)
{
	//����vector��������
	vector<int> vec;//�����Ͷ�����һ������
	vec.push_back(3);
	vec.push_back(6);
	vec.push_back(9);

	//cout << vec.size() << endl;//��ӡ�����ݸ���
	//vec.pop_back();//��β��Ԫ�ز���
	//cout << vec.size() << endl;//��ӡ�����ݸ���

	//��������
	//for (int i=0;i<vec.size();i++)
	//{
	//	cout << vec[i] << endl;
	//}			//�������Ա�����������

	//����ʹ�õ���������
	vector<int>::iterator itor=vec.begin();//�������õ������ĵ�һ��Ԫ��
	//cout << *itor << endl;//��ӡ������
	//ʹ�õ���������,������ı������һ��
	for (;itor!=vec.end();itor++)
	{
		cout << *itor << endl;
	}

	cout << vec.front() << endl;//��ӡ����һ��Ԫ��
	cout << vec.back() << endl;//��ӡ�����һ��Ԫ��

	cout << "************************************" << endl;

	list<int> list1;
	list1.push_back(4);
	list1.push_back(7);
	list1.push_back(9);
	//��������,ʹ����ͨ�ı��������ǲ����Ե�
	//for (int i=0;i<list1.size();i++)
	//{
	//	cout << list1[i] << endl;
	//	//error C2676: �����ơ�[��:��std::list<int,std::allocator<_Ty>>��
	//	//��������������Ԥ����������ɽ��յ����͵�ת��
	//}
	//����ʹ�õ���������
	list<int>::iterator itor1 = list1.begin();
	for (;itor1!=list1.end();itor1++)
	{
		cout << *itor1 << endl;
	}

	cout << "************************************" << endl;

	map<int, string> m;
	pair<int, string> p1(1, "Jim");
	pair<int, string> p2(6, "Cyber");

	//m.push_back(p1);//��ӳ������û��push_back������
	m.insert(p1);
	m.insert(p2);
	//ͨ����������
	cout << m[1] << endl;
	cout << m[6] << endl;
	cout << "************************************" << endl;
	//ͨ�����������ʱ���
	map<int,string>::iterator itor2 = m.begin();
	for (;itor2!=m.end();itor2++)
	{
		//cout << *itor2 << endl;
		//����ӳ���ǳɶԵ�����,����һ��ָ�벢���ܸ��߼����Ӧ�������һ������
		//������Ҫ���ر�ķ�ʽ�ֱ����
		cout << itor2->first << endl;
		cout << itor2->second << endl;
	}
	cout << "************************************" << endl;
	//Ҳ������string��key
	map<string, string> m1;
	pair<string, string> p3("Hello", " world");
	pair<string, string> p4("Welcome", " you");
	m1.insert(p3);
	m1.insert(p4);
	cout << m1["Hello"] << endl;//Ҫ֪����������ʽҲ�ǿ�����ȡ���ݵ�
	map<string, string>::iterator itor3 = m1.begin();
	for (;itor3!=m1.end();itor3++)
	{
		cout << itor3->first << endl;
		cout << itor3->second << endl;
	}

	system("pause");
	return 0;
}