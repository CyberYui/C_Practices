#include "MyOwnSort.h"

/****************************************************************/
/* BubbleSort(int array[], int arraySize, bool m_bTopToBottom)	*/
/* ����:�Դ�����������ð������,m_bTopToBottom�����ж��ǴӴ�	*/
/*		С���л��Ǵ�С��������									*/
/* 																*/
/*	ð������:													*/
/*	ÿ�αȽ��������ڵ�Ԫ��,������ǵ�˳�����Ͱ����ǽ�������	*/
/* 																*/
/* ��������:2019-3-18						Author:Cyber Kaka	*/
/****************************************************************/
void BubbleSort(int array[], int arraySize, bool bBottomToTop)
{
	int n = arraySize;//��ȡ���������ĳ���
	if (bBottomToTop == false)
	{
		//�Ӵ�С����
		int i, j;
		for (i = n-1; i >= 0; i--)
		{
			//ÿһ������ȥ��ÿ�����Ƚ�
			for (j = 0; j <= i; j++)
			{
				//�����ߵ���С���ұߵ���,�ͽ���
				//��ʹ���Լ���,Ҳ�㲻����
				if (array[j] < array[j + 1])
				{
					int temp = array[j];
					array[j] = array[j+1];
					array[j + 1] = temp;
				}
			}
		}
	}
	else if (bBottomToTop == true)
	{
		//��С��������
		int i, j;
		for (i = 1; i <= n - 1; i++)
		{
			//ÿһ������ȥ��ÿ�����Ƚ�
			for (j = 0; j <= n - i; j++)
			{
				//�����ߵ��������ұߵ���,�ͽ���
				//��ʹ���Լ���,Ҳ�㲻����
				if (array[j - 1] > array[j])
				{
					int temp = array[j - 1];
					array[j - 1] = array[j];
					array[j] = temp;
				}
			}
		}
	}
	return;
}


/****************************************************************/
/* QuickSort(int array[], int start, int last)					*/
/* ����:��������ĺ���,��ָ����Χ����������						*/
/* 																*/
/* ��������:													*/
/* ѡ��һ������,ÿ�ζ��������Ϊ����������,ʹ��һ����С������,��*/
/* һ���ִ�������,�������������ٽ��еݹ��ʹ�ÿ��������㷨	*/
/* 																*/
/* ��������:2019-3-18						Author:Cyber Kaka	*/
/****************************************************************/
void QuickSort(int array[], int start, int last)
{
	//����������Ϸ�,ֱ�ӷ���
	if (start > last)
	{
		//�������Ϸ�
		return;
	}
	int pivot;	//��������,��Ϊ��׼��
	int i, j;	//�������ʹ����������ڱ�
	int temp;	//�������ڽ������ݵ���ʱ����
	pivot = array[start];
	i = start;
	j = last;

	while (i != j)	//���ڱ��ߵ�һ���ط��˾�֤��������
	{
		while (array[j] >= pivot && j > i)
		{
			j--;	//j����������
		}
		while (array[i] <= pivot && i < j)
		{
			i++;	//i����������
		}
		//�ҵ������������֮��,�����ڱ�������
		if (i<j)
		{
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	//������ŵ�Ӧ���ڵ�λ��
	array[start] = array[i];
	array[i] = pivot;

	QuickSort(array, start, i - 1);	//�ݹ�����������������
	QuickSort(array, i + 1, last);	//�ݹ����������Ҳ������
}	


/****************************************************************/
/* SimpleInsertSort(int array[], int arraySize)					*/
/* ����:��������в�������										*/
/* 																*/
/* �򵥲�������:												*/
/* �Ӵ����������а�����˳��ѡ��Ԫ��,���Ѿ��ź���Ĳ������Ա�,��	*/
/* ���������Ӧ��λ��,�Ӷ�ʵ�ֶ����������						*/
/* 																*/
/* ��������:2019-3-18						Author:Cyber Kaka	*/
/****************************************************************/
void SimpleInsertSort(int array[], int arraySize)
{
	for (int i = 1; i < arraySize; i++)
	{
		//�ȱ��浱ǰ��Ϊ���ź������
		int currentElement = array[i];
		int k;
		//��������Ԫ����һ�Ƚ�,��������δ�
		for (k = i - 1; k >= 0 && array[k] > currentElement; k--)
		{
			//��������
			array[k + 1] = array[k];
		}
		//һ���������С�ڻ�����ź������,�Ͱ����ŵ�ǰ��ǰ��
		array[k + 1] = currentElement;
	}
}


/****************************************************************/
/* ShellSort(int array[], int arraySize)						*/
/* ����:���������ϣ������										*/
/*																*/
/* ϣ������:													*/
/* �����鰴�±��һ�����ɷ��飬��ÿ��ʹ��ֱ�Ӳ��������㷨����,��*/
/* �ŷ����ϸ����ÿ�������Ԫ��Խ��Խ�࣬��������,��gap����1ʱ,	*/
/* �����ļ�ǡ���ֳ�һ�飬�㷨��֮��ֹ							*/
/* 																*/
/* ��������:2019-3-18						Author:Cyber Kaka	*/
/****************************************************************/
void ShellSort(int array[], int arraySize)
{
	//gap��Ϊ���������
	for (int gap = arraySize / 2; gap >= 1; gap /= 2)
	{
		//�����������
		for (int i = gap; i < arraySize; i++)
		{
			int temp = array[i];
			int j = i - gap;//jҪ����i����Ϊgap�ĵط���ʼ
			//�����ڵĺ�����ǰ��С,�ͽ���λ��
			while (j >= 0 && temp < array[j])
			{
				array[j + gap] = array[j];
				j -= gap;
			}
			array[j + gap] = temp;
		}
	}
}


/****************************************************************/
/* SlectSort(int array[], int arraySize)						*/
/* ����:��������м򵥲�������									*/
/*																*/
/* �򵥲�������:												*/
/* ����ϣ����С����������������,�򷴸��ؽ�һ����Ԫ�ز��뵽һ����*/
/* ��������б���,ֱ�������б��������							*/
/* 																*/
/* ��������:2019-3-19						Author:Cyber Kaka	*/
/****************************************************************/
void SlectSort(int array[], int arraySize)
{
	//ÿ�ν�i����֮������ݶ�Ϊ����������
	for (int i = arraySize-1; i >=1; i--)
	{
		//������ʱ�������浱ǰ�����ֵ�����ֵ�±�
		int currentMax = array[0];
		int currentMaxIndex = 0;
		//��ÿһ��array[i]֮ǰ��������Ƚ�
		for (int j = 1; j <= i; j++)
		{
			//һ���ҵ���array[i]�����,�����趨Ϊ�����,����ֵ���±�
			if (currentMax<array[j])
			{
				currentMax = array[j];
				currentMaxIndex = j;
			}
		}
		//�ж�������Ƿ�Ϊarray[i],������,�������ݷ������,��i���ڵ�λ��
		if (currentMaxIndex!=i)
		{
			array[currentMaxIndex] = array[i];
			array[i] = currentMax;
		}
	}
}


/****************************************************************/
/* MergeSort(int array[], int arraySize)						*/
/* ����:��һ��������ж�·�鲢����								*/
/*																*/
/* ��·�鲢����:												*/
/* ��һ�����黮��Ϊ����,��ÿһ��ݹ�ص��ù鲢����,ÿ����������	*/
/* ���������,�ͽ����ǹ鲢Ϊһ��������б�,���֮ǰ�ĸ��б�,ֱ	*/
/* ���������鶼��ɹ鲢����										*/
/* 																*/
/* ��������:2019-3-19						Author:Cyber Kaka	*/
/****************************************************************/
void merge(int array1[], int array1Size, int array2[], int array2Size, int temp[])
{
	//�����������鼰�䳤��,�����߽��ж�·�鲢����,���ź�������ݴ���temp[]��

	int current1 = 0;//array1����ѭ��������
	int current2 = 0;//array2����ѭ��������
	int current3 = 0;//���ڴ�����ݵ���ʱ���������

	//���Ա������������ʱ,ʼ�հ�С�Ĵ浽temp��
	while (current1 < array1Size&&current2 < array2Size)
	{
		if (array1[current1] < array2[current2])
		{
			temp[current3++] = array1[current1++];
		}
		else
		{
			temp[current3++] = array2[current2++];
		}
	}
	//���ֻ��һ������ʱ�����
	while (current1 < array1Size)
	{
		temp[current3++] = array1[current1++];
	}
	while (current2 < array2Size)
	{
		temp[current3++] = array2[current2++];
	}

}

void arraycopy(int source[], int sourceStartIndex, int target[], int targetStartIndex, int length)
{
	//�������source���鸴�Ƹ�targe����
	for (int i = 0; i < length; i++)
	{
		target[i + targetStartIndex] = source[i + sourceStartIndex];
	}

}

void MergeSort(int array[], int arraySize)
{
	//ȷ����������������ٳ���һ����
	if (arraySize>1)
	{
		//������ְ�,��һ���±�Ϊ��0��arraySize / 2
		int *firstHalf = new int[arraySize / 2];
		arraycopy(array, 0, firstHalf, 0, arraySize / 2);
		MergeSort(firstHalf, arraySize / 2);//�Ե�һ������鲢����
		//�ڶ����±�Ϊ��arraySize/2��arraySize-arraySize/2
		int secondHalfLength = arraySize - arraySize / 2;
		int *secondHalf = new int[secondHalfLength];
		arraycopy(array, arraySize / 2, secondHalf, 0, secondHalfLength);
		MergeSort(secondHalf, secondHalfLength);//�Եڶ�������鲢����
		//������õĽ���Ÿ�temp����
		int *temp = new int[arraySize];
		merge(firstHalf, arraySize / 2, secondHalf, secondHalfLength, temp);
		//��temp�����е����ݸ��Ƹ�array,����,array����Ķ�·�鲢�������
		arraycopy(temp, 0, array, 0, arraySize);
		delete[]temp;
		delete[]firstHalf;
		delete[]secondHalf;
	}

}