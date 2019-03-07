/*������ϰ

����Person���࣬worker�����༰children��ͯ��

worker���ж������ݳ�Աm_strName����

children���ж����Աm_iAge����

worker�༰children����鹫�м̳�Person��

����ChildLabourerͯ����
���м̳й�����Ͷ�ͯ�࣬�Ӷ��γ����μ̳й�ϵ

��main������ͨ��newʵ����ChildLabourer��Ķ���
��ͨ���ö������Person��Worker��Children���еĳ�Ա����
������ٸö���

Ŀ�ģ����ն��ؼ̳У���̳У���̳еĶ��巽����
*/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
 * ��������: Person
 */
class Person
{
public:
	Person()
	{
		cout << "Person" << endl;
	}
	~Person()
	{
		cout << "~Person" << endl;
	}
	void eat()
	{
		cout << "eat" << endl;
	}

};

/**
 * ���幤����: Worker
 * ��̳�����
 */
class Worker : virtual public Person
{
public:
	Worker(string name)
	{
		m_strName = name;
		cout << "Worker" << endl;
	}
	~Worker()
	{
		cout << "~Worker" << endl;
	}
	void work()
	{
		cout << m_strName << endl;
		cout << "work" << endl;
	}
protected:
	string m_strName;
};

/**
 * �����ͯ��:Children
 * ��̳�����
 */
class Children : virtual Person
{
public:
	Children(int age)
	{
		m_iAge = age;
		cout << "Children" << endl;
	}
	~Children()
	{
		cout << "~Children" << endl;
	}
	void play()
	{
		cout << m_iAge << endl;
		cout << "play" << endl;
	}
protected:
	int m_iAge;
};

/**
 * ����ͯ���ࣺChildLabourer
 * ���м̳й�����Ͷ�ͯ��
 */
class ChildLabourer :public Worker, public Children
{
public:
	ChildLabourer(string name, int age) :Worker(name), Children(age)
	{
		cout << "ChildLabourer" << endl;
	}

	~ChildLabourer()
	{
		cout << "~ChildLabourer" << endl;
	}
};

int main(void)
{
	// ��new�ؼ���ʵ����ͯ�������
	ChildLabourer *p = new ChildLabourer("Cyber", 10);
	// ����ͯ��������������
	p->eat();
	p->work();
	p->play();
	delete p;
	p = NULL;

	return 0;
}

/*���н��
		Person
		Worker
		Children
		ChildLabourer
		eat
		Cyber
		work
		10
		play
		~ChildLabourer
		~Children
		~Worker
		~Person

*/