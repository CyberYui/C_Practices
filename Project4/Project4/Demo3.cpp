/*
�����̳к�˽�м̳У�
	Ҫ��1.Person�࣬���ݳ�Ա��
								m_strName,
					  ��Ա������
								���캯��,play()
		  2.Soldier�࣬���ݳ�Ա��
								m_iAge
					   ��Ա������
								���캯��,work()
		  3.Infantry�࣬��Ա������
								 attack()
*/

#include <iostream>
#include <stdlib.h>
//Part1  #include "SoldierF.h"
//Part2  #include "InfantryF.h";
#include "SoldierF.h"

int main(void)
{
	/*Part1*/
	//Soldier soldier;
	//soldier.work();//���Ե���work����,�൱�ڼ�ӷ��ʻ���Ķ���
	//soldier.play();//���Ե���Person���play����
	//�����ǿ��Ե��õģ�����������Part2

	/*Part2*/
	//Sʹ��protected��ʽ�̳�P
	//Soldier soldier;
	//soldier.work();//���Ե���work����,�൱�ڼ�ӷ��ʻ���Ķ���
	//soldier.play();
	//�������ûᱨ�����ڼ̳���protected�����Ի���Ķ����޷������������
	//�޸�Infantry��attack������������ͨ��public�̳�soldier�Ӷ�����person�ĺ���
	//Infantry infantry;
	//infantry.attack();//��������
	//��˵����soldier���Ǽ̳���person�����ݵ�protected��

	/*Part3*/
	//Sʹ��private��ʽ�̳�P
	//����֮��Soldier���Ե���Person�ĺ�����
	//��ΪPerson��protected��public�����ݱ��̳е�Soldier��private����
	//��Ե�Infantry�޷�����person�������ˣ���ΪPerson��protected��public�����ݱ��̳е�Soldier��private����
	Soldier soldier;
	soldier.work();//���Ե���work����,�൱�ڼ�ӷ��ʻ���Ķ���
	/*soldier.play();//�������е�ԭ����Ӧ�ô�����ĺ�����ȥ���ã������������������ö���ȥ����
	soldier.m_strName;*/

	system("pause");
	return 0;
}