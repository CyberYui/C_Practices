#pragma once
#include "CoordinateThird.h"

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);//�ǵ�Ҫ��ʼ��A��B����Ȼ������ֻ��Ĭ��ֵ
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	//����Ա��������ͨ��Ա����������
	void printInfo();
	void printInfo() const;
private:
	//��A�㶨��Ϊ�������Ա
	//�����Ա�ĸ�ֵ����Ҫ��ʼ���б��
	const Coordinate m_coorA;
	Coordinate m_coorB;
};