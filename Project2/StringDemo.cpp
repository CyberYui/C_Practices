#include <iostream>
#include <stdlib.h>
//����string��ͷ�ļ�
#include <string>
using namespace std;

/*****************************************************************/
/*��Ŀ������                                                     */
/*    1.��ʾ�û���������                                         */
/*    2.�����û�������                                           */
/*    3.Ȼ�����û��ʺã�hello xxx                                */
/*    4.�����û����ֵĳ���                                       */
/*    5.�����û����ֵ�����ĸ��ʲô                               */
/*    6.����û�ֱ������س�����ô�����û�������Ϊ��             */
/*    7.����û��������imooc����ô�����û��Ľ�ɫ��һ������Ա    */
/*****************************************************************/

int main(void)
{
	//��ʾ�û���������
	string name;
	cout << "Please input your name:";
	//�ж��û������Ƿ�Ϊ��
	getline(cin, name);//��cin�����ݸ���name
	//�ж�name�Ƿ�Ϊ��
	if (name.empty())
	{
		//��Ϊ�գ������ʾ���˳�����
		cout << "Input is null !" << endl;
		system("pause");
		return 0;
	}
	else if (name == "imooc")
	{
		//��Ϊ�գ���Ϊimooc����ʾ�û��ǹ���Ա
		cout << "You are an administrator." << endl;
		cout << "Welcome back! " + name << endl;
	}
	//������û����к�
	else
		cout << "hello " + name << endl;

	//����û����ֵĳ���
	//���´��������޷���ʾ���ȵ�bug�����ᱨ��
	//cout << "Your name length is: " + name.size() << endl;
	//�ַ���+���ֵ���ʽ����ֱ�������Ҫ�ֶ�
	cout << "Your name length is: " << name.size() << endl;
	//����û����ֵ�����ĸ
	cout << "Your name's first letter is: " << name[0] << endl;

	system("pause");
	return 0;
}