/*�ۺ���ϰ

����һ��Student�࣬��������һ�����ݳ�Ա��
�����޲ι��캯�����вι��캯�����������캯���������������������ֵķ�װ������
��main������ʵ����Student���󣬲�������غ������۲����н����

*/
#include <iostream>
#include <string>
using namespace std;
/**
 * �����ࣺStudent
 * ���ݳ�Ա��m_strName
 * �޲ι��캯����Student()
 * �вι��캯����Student(string _name)
 * �������캯����Student(const Student& stu)
 * ����������~Student()
 * ���ݳ�Ա������setName(string _name)��getName()
 */
class Student
{
public:
	Student()
	{
		cout << "Student()" << endl;
	}
	Student(string _name)
	{
		cout << "Student(string _name)" << endl;
	}
	Student(const Student& stu)
	{
		cout << "Student(const Student& stu)" << endl;
	}
	~Student()
	{
		cout << "~Student()" << endl;
	}
	void setName(string _name)
	{
		m_strName = _name;
	}
	string getName()
	{
		return m_strName;
	}
private:
	string m_strName;
};


int main(void)
{
	// ͨ��new��ʽʵ��������*stu
	Student *stu = new Student();
	// ���Ķ�������ݳ�ԱΪ��Ľ������
	stu->setName("Ľ����");
	// ��ӡ��������ݳ�Ա
	cout << stu->getName() << endl;
	return 0;
}