#pragma once
//Line��ͷ�ļ����м�������������Ҫ����ײ�ͷ�ļ�
#include "CoordinateSecond.h"
//����δʹ��cout��string��������Բ��õ���ϵͳ�ļ�

class Line
{
public:
	//Line();
	//���칹�캯��
	Line(int x1, int y1, int x2, int y2);//����ֻ��������ѳ�ʼ���б�д������
	~Line();

	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();//���ڴ�ӡ��Ϣ�ĺ���

private:
	//Line�����ݳ�Ա�ǵ㣬�Ƕ����Ա
	Coordinate m_coorA;
	Coordinate m_coorB;
};