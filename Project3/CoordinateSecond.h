#pragma once
//����Coordinateͷ�ļ�����ײ��
//���Һ���ֻ�������ѣ����Բ��õ�������ͷ�ļ�
//����δʹ��cout��string���������Ҳ���õ���ϵͳ�ļ�
class Coordinate
{
public:
	//Coordinate();
	//���칹�캯��
	Coordinate(int x, int y);
	~Coordinate();

	void setX(int x);
	int getX();
	
	void setY(int y);
	int getY();
	
private:
	int m_iX;
	int m_iY;
};