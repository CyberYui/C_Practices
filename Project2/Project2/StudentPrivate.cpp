/*���ݵķ�װ

����һ��Student�࣬����������Ϣ��
	1.������name
	2.�Ա�gender
	3.ѧ��(ֻ��)��score  //������ʵ�ַ�װ
	4.ѧϰ��study

*/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//���ȶ���ѧ���࣬����һЩ��Ϣ
class Student
{
public:
	//������д��Ա������������ͨ��set��get����
	//ע�����set�����ÿգ����洫ֵ��get����ֻ����ֵ�������Ƿ�void��
	void setName(string _name)
	{
		m_strName = _name;
	}

	string getName()
	{
		return m_strName;
	}
	//�Ա���
	void setGender(string _gender)
	{
		m_strGender = _gender;
	}

	string getGender()
	{
		return m_strGender;
	}

	//����ֻ�������ݣ�ֻдget��������дset�����ͺ���
	int getScore() 
	{
		return m_iScore;
	}
	//����ѧ����Ҫ�����ֵ�ķ�������������һ��������ֻ�������ó�ֵ
	void initScore()
	{
		m_iScore = 0;//�򵥵�����һ����ʼֵ�ͺ�
	}
	//�������ص�֪ʶ��дһ������д�ֵ�ķ���
	//�Ժ�Ĵ���ֵ�ķ������ù��캯����ʵ��
	void initScore(int _score)
	{
		m_iScore = _score;//��ʵ���Ǹ��ر����ֵ�set��������
	}
	/*���û�г�ʼ����m_iScore��ֵ���ɱ����������ֵ*/
	/*����VS2017�����-858993452������ֵ������ܿ���*/

	//��������һ��ѧϰ�ĺ���
	void study(int _score)
	{
		m_iScore += _score;
		//ѧϰ���õķ�����ԭ������ӣ��õ��ܷ�
	}

private://��������Ҫ��m_+���ͼ��+��������
	string m_strName;
	string m_strGender;
	int m_iScore;
	//���������͸��ױ���
};


int main(void)
{
	//ʵ��������
	Student stu;
	string realName;
	cout << "�����ͬѧ������������:" << endl;
	cin >> realName;
	stu.setName(realName);
	//��ѧ���޷���
	cout << "��ӭ" << stu.getName() << "��ѧ!" << endl;

	string realGender;
	cout << "���" << stu.getName() << ",�������Ա�:" << endl;
	cin >> realGender;
	stu.setGender(realGender);

	//��һ�ο����ԣ���ʼ������
	int firScore;
	cout << "���������ڵ�ѧ����:" << endl;
	cin >> firScore;
	stu.initScore(firScore);//������ʼ��

	//������ѧϰ���ѧ��
	int extScore;
	cout << "���������õ�ѧ��:" << endl;
	cin >> extScore;
	stu.study(extScore);
	cout << "�����ڵ�ѧ����:" << stu.getScore() << endl;

	system("pause");
	cout << stu.getName() << "���˳�ϵͳ������" << endl;
	return 0;
}//����Ŀ������ʱ��Ϊ10s