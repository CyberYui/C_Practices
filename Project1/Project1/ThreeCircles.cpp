/*����1

ʹ��ѭ������1-2+3-4+5-6+��-100��ֵ��

�ڱ༭���и���������ѭ����ṹ�Ĳ��ִ��룬��ѡ����ʵ�ѭ���ṹ��ȫ����ʵ�ִ˹��ܡ�

���н��Ϊ�� sum=-50 
*/

#include <stdio.h>
int main()
{
	/* С����ǣ�
		   ѡ��������Ϊ�������ѭ���ṹ��ɹ��ܰ� */
	int sum = 0;  //�������������sum
	int i = 1;    //����ѭ�����ֱ���i
	int flag = 1; //�������״̬����flag

	//ʹ��whileѭ��
	while (i <= 100)
	{
		//��i++�����������Ϊ-50
		(i % 2 == 0) ? (sum += flag * (-1)*i) : (sum += flag * i);//���������ţ�ż���ø���
		i++;
	}


	//�����ѭ����������ĸľͺ���
	/*i = 1;  //���³�ʼ������i
	//do-whileѭ��
	do{
		i++;
		(i % 2 == 0) ? (sum += flag * (-1)*i) : (sum += flag * i);
	}while(i<=100);


	i = 1;  //���³�ʼ������i
	//ʹ��forѭ��
	for(i=1;i<=100;i++)
	{
		(i % 2 == 0) ? (sum += flag * (-1)*i) : (sum += flag * i);
	}
	*/
	printf("sum=%d\n", sum);
	return 0;
}

//������������������cpp�ļ�������Ŀ���Ҽ����ļ��Ƴ�����