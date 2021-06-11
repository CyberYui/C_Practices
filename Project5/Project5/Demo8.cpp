#include <iostream>
#include "Bird8.h"
#include "Plane8.h"
using namespace std;

/************************************************************************/
/* RTTI
		1.Flyable��,��Ա����:takeoff,land
		2.Plane��,��Ա����:takeoff,land,carry
		3.Bird��,��Ա����:takeoff,land,foraging
		4.ȫ�ֺ���doSomething(Flyable *obj)
*/
/************************************************************************/

void doSomething(Flyable *obj)
{
	//typeid(*obj)������*obj��˼��ָobjָ��ָ��Ķ���
	//.name()�ᴫ��Bird��Plane������������
	cout << typeid(*obj).name() << endl;
	obj->takeoff();
	if (typeid(*obj)==typeid(Bird))//�ж�objָ��ָ��Ķ��������Ƿ�ΪBird
	{//ʹ��dynamic_cast����ת��ΪBird��ָ�룬�������ָ�븳ֵ���µ�ָ��bird
		Bird *bird = dynamic_cast<Bird *>(obj);
		bird->foraging();
	}
	if (typeid(*obj) == typeid(Plane))//�ж�objָ��ָ��Ķ��������Ƿ�ΪPlane
	{//����ͬ��
		Plane *plane = dynamic_cast<Plane *>(obj);
		plane->carry();
	}
	obj->land();
}

int main(void)
{
	/*
	//ʵ����bird����
	Bird b;
	doSomething(&b);//����������
	cout << "-----------------------------------------------------" << endl;
	Plane *p = new Plane();
	doSomething(p);

	delete p;
	p = NULL;

	//����Ϊtypeid��dynami_cast��ע������ʵ��
	int i;
	cout << typeid(i).name() << endl;//�������Կ���i������
	Flyable *k = new Bird();
	cout << typeid(k).name() << endl;//�۲�k��*k�Ĵ�ӡ����
	cout << typeid(*k).name() << endl;

	delete k;
	k = NULL;
	*/
	/*
		class Bird
		Bird --> takeoff()
		Bird --> foraging()
		Bird --> land()
		-----------------------------------------------------
		class Plane
		Plane --> takeoff()
		Plane --> carry()
		Plane --> land()
		int
		class Flyable *		//cout << typeid(k).name() << endl;
		class Bird			//cout << typeid(*k).name() << endl;
	*/

	//��������dynamic_cast��ע������
	//�����޸�Flyable�࣬Bird�࣬ȥ�����麯��
	//Flyable *p = new Bird();
	//Bird *b = dynamic_cast<Bird *>(p);
	//    //����error C2683: ��dynamic_cast��:��Flyable�����Ƕ�̬����
	//delete p;
	//p = NULL;
	//delete b;
	//b = NULL;
	
	//ͬ���ģ��ö���Ҳ������
	/*Flyable p;
	Bird b = dynamic_cast<Bird>(p);*/
	//����error C2683: ��dynamic_cast��:��Flyable�����Ƕ�̬����
	//�Լ�error C2680: ��Bird��: dynamic_cast ��Ŀ��������Ч
	//ԭ��Ŀ�����ͱ�����ָ���Ѷ������ָ�������

	system("pause");
	return 0;
}