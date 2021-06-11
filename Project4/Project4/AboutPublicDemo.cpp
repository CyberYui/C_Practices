/*Ŀ�ģ�
�鿴ʹ��public�̳е����༰������Ի���ĺ��������ݳ�Ա����

����״̬��
���������࣬Person��Student��Children
��ϵ��Person��Student�Ļ��࣬Student��Children�Ļ���
ÿ���඼��public��protected�Լ�private������
ÿ�����ݷֱ���һ�����ݳ�Ա�ͳ�Ա����
*/

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

/*Person��*/
class Person
{
public:
	Person(string name = "Jim", int time = 300, string sex = "man")
	{
		p_strName = name;
		p_iTime = time;
		p_strSex = sex;
		cout << "Person()" << endl;
	}
	string getName()
	{
		cout << "getName()" << endl;
		return p_strName;
	}
	string p_strName;
protected:
	int getTime()
	{
		cout << "getTime()" << endl;
		return p_iTime;
	}
	int p_iTime;
private:
	void setSex(string sex)
	{
		cout << "setSex(string sex)" << endl;
		p_strSex = sex;
	}
	string p_strSex;
};

/*Student��*/
//��Ҫ������public�̳�person��,main������ʵ��1��2�����
class Student:public Person
{
public:
	Student(int age = 5, bool love = true, int money = 600)
	{
		s_iAge = age;
		s_bLove = love;
		s_iMoney = money;
		cout << "Student()" << endl;
	}
	int getAge()
	{
		cout << "getAge()" << endl;
		return s_iAge;
	}
	int s_iAge;
	//���Ե���person��protected������public����
	void Test()
	{
		cout << "Test()" << endl;
		getName();
		getTime();
		//cout << p_strSex << endl;
		//��Person::p_strSex��: �޷����� private ��Ա(�ڡ�Person����������)
	}
protected:
	bool getLove()
	{
		cout << "getLove()" << endl;
		return s_bLove;
	}
	bool s_bLove;
private:
	void setMoney(int money)
	{
		cout << "setMoney(int money)" << endl;
		s_iMoney = money;
	}
	int s_iMoney;
};

/*Children��*/
//��Ҫ������public�̳�student��,main������ʵ��3�����
class Children:public Student
{
public:
	Children(int height = 169, string toy = "Teddy bear", int weight = 30)
	{
		c_iHeight = height;
		c_strToy = toy;
		c_iWeight = weight;
		cout << "Children()" << endl;
	}
	int getHeight()
	{
		cout << "getHeight()" << endl;
		return c_iHeight;
	}
	int c_iHeight;
	//���Ե���person��student��protected������public����
	void printInfo()
	{
		cout << "printInfo()" << endl;
		//���Ե���person�������
		getName();//public
		getTime();//protected
		//cout << p_strSex << endl;//private
		//��Person::p_strSex��: �޷����� private ��Ա(�ڡ�Person����������)

		//���Ե���student�������
		getAge();//public
		getLove();//protected
		//cout << s_iMoney << endl;//private
		//��Student::s_iMoney��: �޷����� private ��Ա(�ڡ�Student����������)
	}
protected:
	string getToy(string toy)
	{
		cout << "getToy(string toy)" << endl;
		c_strToy = toy;
	}
	string c_strToy;
private:
	void setWeight(int weight)
	{
		cout << "setWeight(int weight)" << endl;
		c_iWeight = weight;
	}
	int c_iWeight;
};

int main(void)
{
	//ʵ��1.��Student�Ķ����Ƿ��ܵ���Person�ĺ��������ݳ�Ա
	Student stu1;
	stu1.getAge();//��������public����

	//stu1.getLove();//��������protected����
	//��Student::getLove��: �޷����� protected ��Ա(�ڡ�Student����������)

	//stu1.setMoney(3000);//��������private����
	//��Student::setMoney��: �޷����� private ��Ա(�ڡ�Student����������)

	stu1.getName();//����person��public����

	//stu1.getTime();//����person��protected����
	//��Person::getTime��: �޷����� protected ��Ա(�ڡ�Person����������)

	//stu1.setSex("Female");//����person��private����
	//��Person::setSex��: �޷����� private ��Ա(�ڡ�Person����������)

	//ʵ��2.��Student��public��Ա�����ܷ����public��public��protected��private����
	//�����Student��Test����
	//�ɼ��ܷ���public��protected�ĺ���
	//ͬ���ģ�Student����ĳ�Ա�����ǿ���ʹ��Student��public��protected��private���ݵ�
	//��ע����������Ҫд�ڳ�Ա�������У��������ö������
	stu1.Test();

	//ʵ��3.��Children���ܷ���public�̳�Student���ʹ��Student��Person�ĳ�Ա���������ݳ�Ա
	//ͬ������ʵ����һ��children����
	Children child1;
	child1.getName();//����person��public����

	//child1.getTime();//����person��protected����,����
	//child1.setSex("Male");//����person��private����,����

	//���������Ե���student����
	child1.getAge();//����student��public����

	//child1.getLove();//����student��protected����,����
	//child1.setMoney(3000);//����student��private����,����

	//ʵ��4.��Children��дһ����Ա����printInfo�����ܷ�:
	//		1.����public��public��protected��private��������
	//		2.����student��public��protected��private��������
	//�����children��public�е�printInfo����
	//�ɼ��ܷ���Person��Student��public��protected�ĺ���
	//ͬ���ģ�Children����ĳ�Ա�����ǿ���ʹ��Children��public��protected��private���ݵ�
	//��ע����������Ҫд�ڳ�Ա�������У��������ö������
	child1.printInfo();

	/*����
	����Student��public��ʽ�̳л���Person
		ʵ����student�����
		1.�ܵ�������public����
		2.�ܵ��û���public����
		�޷����������protected��private����
	���ǻ���Person��protected�����Ǳ��̳��˵�,
					�������Student�ĳ�Ա�����ܹ��ں������е���Person�е�public��protected����

	����Student������Children��public��ʽ�̳�Student
		ʵ����child�����
		1.�ܵ��������public����
		2.�ܵ���Person�����public����
		2.�ܵ���Student�����public����
		�޷����������protected��private����
	�������ڻ���Person��protected�����Ǳ�Student�̳��˵�,
	����Children��public��ʽ�̳���Student.
					�������Children�ĳ�Ա�����ܹ��ں������е���
								1.Person�е�public��protected����
								2.Student�е�public��protected����
	*/

	system("pause");
	return 0;
}
/*���н��
	//stu1ʵ������ʼ
	Person()		//����Person���캯��
	Student()		//����Student���캯��
	getAge()		//���������Student�е�public�е�getAge()
	getName()		//���������Person�е�public�е�getName()
	Test()			//���������Student�е�public�е�Test()
	getName()		//Test()������Person�е�public�е�getName()
	getTime()		//Test()������Person�е�protected�е�getTime()
	//child1ʵ������ʼ
	Person()		//����Person���캯��
	Student()		//����Student���캯��
	Children()		//����Children���캯��
	getName()		//���������Person�е�public�е�getName()
	getAge()		//���������Student�е�public�е�getAge()
	printInfo()		//���������Children�е�public�е�printInfo()
	getName()		//printInfo()������Person�е�public�е�getName()
	getTime()		//printInfo()������Person�е�protected�е�getTime()
	getAge()		//printInfo()������Student�е�public�е�getAge()
	getLove()		//printInfo()������Student�е�protected�е�getLove()
*/