/*��Ԫ����

����һ��Student�࣬�������ֺ������������ݳ�Ա
ʵ����һ��Student���󣬲���ӡ������������ݳ�Ա

*/

#include <iostream>
#include <string>
using namespace std;

/**
  * �����ࣺStudent
  * ���ݳ�Ա�����֡�����
  */
class Student
{//�����࣬��������û��()��
public:
	// �������ݳ�Ա���� m_strName ������ m_iAge
	string m_strName;
	int m_iAge;
};

int main()
{
	// ʵ����һ��Student����stu
	Student stu;
	// ���ö�������ݳ�Ա
	stu.m_strName = "Ľ����";
	stu.m_iAge = 2;

	// ͨ��cout��ӡstu��������ݳ�Ա
	cout << stu.m_strName << " " << stu.m_iAge << endl;
	return 0;
}