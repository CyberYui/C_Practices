#include <iostream>
#include <stdlib.h>
#include "SoldierFive.h"

/************************************************************************/
/*���м̳У�Is-a
		Ҫ��1.Person�࣬���ݳ�Ա��m_strName
						  ��Ա���������캯��������������play()
			  2.Soldier�࣬���ݳ�Ա��m_iAge
						   ��Ա���������캯��������������work()
			  3.���庯��test1(Person p)
						test2(Person &p)
						test3(Person *p)
*/
/************************************************************************/

//��������
void test1(Person p);
void test2(Person &p);
void test3(Person *p);

int main(void)
{
	//Soldier soldier;
	//�Ȳ����庯��test1��test2��test3
	//��ʹ��soldier��ʼ��p
	//Person p = soldier;//��Person p; �� p=soldier;��һ����Ч��
	//p.play();
	/*���н��
		Person()
		Soldier()
		Person --> play()
		�밴���������. . .
		~Person()
		~Soldier()
		~Person()
	*/
	//ʹ��Person�������
	//Person p;
	//p.play();
	/*���н��
		Person()
		Soldier()
		Person()
		Person --> play()
		�밴���������. . .
		~Person()
		~Soldier()
		~Person()
	*/
	//ʹ��ָ��
	//Person *p =new Soldier;
	//p->play();
	//p->work();//��work��: ���ǡ�Person���ĳ�Ա
	//ʹ��ָ��ֻ�ܵ���Person���е����ݳ�Ա�����ݶ���
	//delete p;
	//p = NULL;
	/*���н��,���Կ������������������δ�����ã����ǻᵼ���ڴ�й©��
		Person()
		Soldier()
		Person-- > play()
		~Person()
	*/
	//�޸�Person.h��д������������
	/*���н�������Կ����������������������Ա�����
		Person()
		Soldier()
		Person --> play()
		~Soldier()
		~Person()
	*/
	//дtest������д�ú�ִ����������
	Person p;
	Soldier s;
	//�ֱ𴫲�
	//test1(p);
	//test1(s);
	/*
		Person()			//ʵ����p
		Person()			//ʵ����s
		Soldier()

		//test1�ڴ�ֵʱ���ڲ����Ƕ�����˻���ʱ����һ������p��Ϊ��������������play
		Person --> play()	//����play
		Cyber
		~Person()			//������ʱ����p
		//test1�ڴ�ֵʱ���ڲ����Ƕ�����˻���ʱ����һ������s��Ϊ��������������play
		//��soldier�Ĺ��캯�����޸���ֵ�����Ի���ʾ���������
		Person --> play()	
		David
		~Person()			//��������������������ʱ����s
		//�ɼ���������Ĳ����ǻ���Ķ�����ô����Ķ����������Ķ��󶼿��Դ������
		//�����ܹ�����ʹ��
		�밴���������. . .
		~Soldier()
		~Person()
		~Person()
	*/
	//test2(p);//���й�����û����ʱ����Ĵ���
	//test2(s);
	/*
		Person()
		Person()
		Soldier()			//ʵ����person��soldier����
		//test1�ڴ�ֵʱ���ڲ��������ã����Ի��ڴ���ʱ�Զ��������p���Ӷ�����play
		Person --> play()	
		Cyber
		//test1�ڴ�ֵʱ���ڲ��������ã����Ի��ڴ���ʱ�Զ��������s���Ӷ�����play
		//��soldier�Ĺ��캯�����޸���ֵ�����Ի���ʾ���������
		Person --> play()
		David
		//�ɼ���������Ĳ����ǻ�������ã���ô����Ķ����������Ķ��󶼿��Դ������
		//�����ܹ�����ʹ��
		�밴���������. . .
		~Soldier()
		~Person()
		~Person()
	*/
	test3(&p);//�����ַ
	test3(&s);
	/*�ɼ����н����test2����һ��
		Person()
		Person()
		Soldier()
		//test3�ڴ���ʱ���ڲ�����ָ�룬���ָ���ǻ����ָ��p
		//�������ַ������ʱ��ָ��p��ֱ���û��������ĳ�Ա���������ݳ�Ա
		Person --> play()
		Cyber
		Person --> play()
		David
		�밴���������. . .
		~Soldier()
		~Person()
		~Person()
	*/
	/*
	���Կ�������ʹ��test2��test3ʱ��Ч�ʻ���ߣ���Ϊû����ʱ�����Ĵ���
	*/

	system("pause");
	return 0;
}

void test1(Person p)//�������
{
	p.play();
}
void test2(Person &p)//���ò���
{
	p.play();
}
void test3(Person *p)//ָ�����
{
	p->play();
}