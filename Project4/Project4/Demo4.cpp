#include <iostream>
#include <stdlib.h>
#include "SoldierFourth.h"

/************************************************************************/
/* �̳й�ϵ�е�����
		Ҫ��1.Person�࣬���ݳ�Ա��m_strName
						  ��Ա���������캯����play()
			  2.Soldier�࣬���ݳ�Ա����
						   ��Ա���������캯����play()��work()
*/
/************************************************************************/

int main(void)
{
	Soldier soldier;
	soldier.play();
	//soldier.work();
	//������������
	soldier.Person::play();
	//�������޲κ��������ݣ�������вκ����أ�
	//soldier.play(7);
	//soldier����play,ֻ�ܵ����Լ��ģ��̳����ı���Ҫ��������ʽ����
	soldier.work();
	soldier.play(7);
	soldier.Person::play();
	//��soldier��ͬ�����ݳ�Ա���е���,���õ��ǳ�Ա����������
	//������޸ĺ��play(int x)������work����
	//������������ֻ�ܵ�������ģ���ε���person��ͬ�����ݳ�Ա��
	//�ٴ��޸�soldier��work������������м���
	soldier.Person::play();

	system("pause");
	return 0;
}