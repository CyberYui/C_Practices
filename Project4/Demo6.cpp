#include <iostream>
#include <stdlib.h>
#include "InfantrySix.h"

/************************************************************************/
/* ���ؼ̳�
		Ҫ��1.Person�࣬���ݳ�Ա��m_strName
						  ��Ա���������캯��������������play()
			  2.Soldier�࣬���ݳ�Ա��m_iAge
						   ��Ա���������캯��������������work()
			  3.Infantry�࣬���ݳ�Ա����
							��Ա���������캯��������������attack()
			  4.���庯��test1(Person p)
						test2(Person &p)
						test3(Person *p)
*/
/************************************************************************/

void test1(Person p)
{
	p.play();
}

void test2(Person &p)
{
	p.play();
}

void test3(Person *p)
{
	p->play();
}

int main(void)
{
	Infantry infantry;//�̳�����ÿ���඼Ҫ����Person->Soldier->Infantry
	test1(infantry);
	test2(infantry);
	test3(&infantry);//����test������������Ķ�����Ϊ����
	//*****���ۼ̳еĲ㼶�ж��ٲ㣬����ֻҪ����ֱ�ӻ��ӵļ̳й�ϵ
	//*****��ô���඼�������Լ���ֱ�Ӹ�����Ӹ����֮ΪIs-A�Ĺ�ϵ
	//*****�����ܹ�ͨ�������ָ���ֱ�������������Ķ��������Ӧ����
	//��̳е����ݼ�Demo7��Ӧ������
	//Demo7.cpp|FarmerSeven.cpp+.h|WorkerSeven.cpp+.h|MigrantWorkerSeven.cpp+.h

	system("pause");
	return 0;
}