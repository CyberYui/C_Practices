#pragma once
class Coordinate
{
public:
	Coordinate(int x = 5, int y = 6);
	~Coordinate();
	//�����ĺ������޷���������Ա������
	//�����ʽ����ʹ�ó���Ա����
	//����set�����Ǳ�������Լ��ı����ģ�����Ա�����Ͳ��ܲ�����
	void setX(int x);
	//��ˣ��޸ĳɳ���Ա������Ӧ����get����
	int getX(/* const Coordinate *this */) const;//��ʵ�����ڲ�ע�͵���˼
	//constд�ں��������ĺ��棬�ͱ�ɳ���Ա������
	//�ǵ�Ҫ������ʵ��ͬ������
	void setY(int y);
	int getY() const;
	//constд�ں��������ĺ��棬�ͱ�ɳ���Ա������
	//�ǵ�Ҫ������ʵ��ͬ������
private:
	int m_iX;
	int m_iY;
};