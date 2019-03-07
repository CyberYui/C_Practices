#pragma once
#include <iostream>
#include <string>
using namespace std;

//������Teacher���Լ���Ӧ�ĺ���
class Teacher
{
public:
	//�������캯��
	Teacher();
	//Teacher(string name, int age);
	//����������Ĭ��ֵ�Ĺ��캯����������������ע�ͳ�ͻ�������ض������
	Teacher(string name, int age = 20);

	/*��ʱ�������ȫ��Ĭ��ֵ�����ܻ��ͻ���޷���ȷ����					 */
	/*��Teacher(string name = "James", int age = 20);��Teacher();�ͻ��ͻ*/
	/*��Ϊ�����Լ���֪��Ӧ�õ�����һ������								 */

	//����Ϊ��Ա��������
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};