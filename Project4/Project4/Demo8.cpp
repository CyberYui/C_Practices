#include <iostream>
#include <stdlib.h>
#include "MigrantWorkerEight.h"

/************************************************************************/
/* ��̳�
		Ҫ��1.Farmer�࣬���ݳ�Ա��m_strName
						  ��Ա���������캯��������������sow()
			  2.Worker�࣬���ݳ�Ա��m_strCode
						  ��Ա���������캯��������������carry()
			  3.MigrantWorker�࣬���ݳ�Ա����
								 ��Ա���������캯������������
			  4.Person�࣬���ݳ�Ա��m_strColor
						  ��Ա���������캯��������������printColor()
*/
/************************************************************************/

int main(void)
{
	//��������ͷ�ļ�����#pragma once�����main��ʲô����д�����ִ��
	//��������ͷ�ļ�������#pragma once������ʱ
	//�����main������ʲô����д�����У��������������,
	/*
	1>g:\c_practices\project4\project4\personeight.h(6): 
			error C2011: ��Person��:��class�������ض���

	1>g:\c_practices\project4\project4\personeight.h(5): 
			note: �μ���Person��������

	1>g:\c_practices\project4\project4\farmereight.h(7): 
			error C2504: ��Person��: δ�������
	*/
	//�������������ڵ�ǰ�Ĺ��̵���Person�����������飬Ҳ����˵�������ι�ϵ����
	//����ض���ķ�����
	//1.#pragma once
	//#pragma once��һ���Ƚϳ��õ�C/C++��ע
	//ֻҪ��ͷ�ļ����ʼ����������ע�����ܹ���֤ͷ�ļ�ֻ������һ�Ρ�
	//2.�궨�壬ʹ�����ַ�ʽʹ��ֻ������һ�Σ������PersonEight.h

	//���濪ʼ����
	//Part1 ����ʵ����ũ������ײ����ʱ�򣬺����ĵ������
	MigrantWorker *p = new MigrantWorker("Cyber","531","white");
	delete p;
	p = NULL;
	cout << "****************************Part1****************************" << endl;
	/*
		Person()			//ʵ����Farmer��Workerʱ������Ҫ�ȹ���Person
		Farmer()
		Person()
		Worker()
		MigrantWorker()		//���ʵ����ũ��
		~MigrantWorker()
		~Worker()
		~Person
		~Farmer()
		~Person
		�밴���������. . .
	*/

	//Part2 ��ʵũ�����Ѿ�����������Person������
	//ʹ�õ��õķ�ʽ֤����һ��
	MigrantWorker *p1 = new MigrantWorker("Cyber", "531", "white");
	//ʵ����һ����Ҫ����һЩ�������ֱ���Worker(),Farmer()
	//ͨ��ũ�񹤵�ָ��ֱ��ӡ����Person
	//����Person��������Worker��Farmer��
	p1->Farmer::printColor();
	p1->Worker::printColor();
	delete p1;
	p1 = NULL;
	/*
		Person()
		Farmer()
		Person()
		Worker()
		MigrantWorker()
		~MigrantWorker()
		~Worker()
		~Person
		~Farmer()
		~Person
		****************************Part1****************************
		Person()
		Farmer()
		Person()			//Person���ǹ���������
		Worker()
		MigrantWorker()
		m_strColor: Farmer white		//Farmer����white
		Person() --> printColor()
		m_strColor: Worker white		//Worker����white
		Person() --> printColor()
		//�ɼ�ʵ�����Ķ�����������color�����ݵģ�����ϣ��ֻ��һ��������Part3
		~MigrantWorker()
		~Worker()
		~Person
		~Farmer()
		~Person
		�밴���������. . .
	*/
	cout << "****************************Part2****************************" << endl;
	/*Part3
	ֻʵ����һ��Person����ķ���-->��̳�
	*/
	//����Worker���Farmer��Ķ���
	MigrantWorker *p2 = new MigrantWorker("Cyber", "531", "white");
	p2->Farmer::printColor();
	p2->Worker::printColor();
	delete p2;
	p2 = NULL;
	/*
	...
	****************************Part2****************************
		Person()
		Farmer()
		Worker()			//Personֻʵ������һ�Σ�����˳���Ч��
		MigrantWorker()
		m_strColor: blue
		Person() --> printColor()
		m_strColor: blue
		Person() --> printColor()		//ֻ��Ĭ�ϲ�����ʹ�ã��޷��������л�ô���Ĳ���
		~MigrantWorker()
		~Worker()
		~Farmer()
		~Person
	*/

	system("pause");
	return 0;
}