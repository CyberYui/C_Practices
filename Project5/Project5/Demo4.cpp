/*������ϰ

����һ�����animal���࣬Ҫ�����麯��eat��move�������幹�캯��������������
����һ������Dog���࣬Ҫ���м̳ж����࣬���幹�캯������������������ʵ���Լ���eat��move����

ʹ�ø������ʵ�������࣬���������Ա����

�ڴ���༭���У���д��Ӧ�Ĵ��룬��������н������

		Animal
		Dog
		Dog -- eat
		Dog -- move
		~Dog
		~Animal

*/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
 *  ���嶯���ࣺAnimal
 *  ��Ա������eat()��move()
 */
class Animal
{
public:
	// ���캯��
	Animal() { cout << "Animal" << endl; }
	// ��������
	virtual ~Animal() { cout << "~Animal" << endl; }
	// ��Ա����eat()
	virtual void eat() { cout << "Animal -- eat" << endl; }
	// ��Ա����move()
	virtual void move() { cout << "Animal -- move" << endl; }
};

/**
 * ���幷�ࣺDog
 * ���๫�м̳ж�����
 * ��Ա�����������еĳ�Ա����
 */
class Dog : public Animal
{
public:
	// ���캯��
	Dog() { cout << "Dog" << endl; }
	// ��������
	virtual ~Dog() { cout << "~Dog" << endl; }
	// ��Ա����eat()
	virtual void eat() { cout << "Dog -- eat" << endl; }
	// ��Ա����move()
	virtual void move() { cout << "Dog -- move" << endl; }
};

int main(void)
{
	// ͨ���������ʵ��������
	Animal *p = new Dog();
	// ���ó�Ա����
	p->eat();
	p->move();
	// �ͷ��ڴ�
	delete p;
	p = NULL;

	return 0;
}