#include <stdio.h>

int sz;
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);// ����Ԫ�ظ��� = �����ܳ��� / ����Ԫ�س��� 
	int left = 0;//���±� 
	int right = sz - 1;//���±� 
	//���ֲ���ѭ����
	while(left<=right)//��ֹ������û��Ҫ���ҵ��������������±꽻�� 
	{ 
	int mid = (left + right) / 2;//���µ������±�����µ��м�ֵ 
		if(arr[mid]>k)//���±��м�ֵ����Ҫ���ҵ���ʱ 
		{
			right = mid - 1;//���±������� 
		}
		
		else if(arr[mid]<k)//���±��м�ֵС��Ҫ���ҵ���ʱ 
		{
			left = mid + 1;//���±������� 
		}
		
		else if(arr[mid]==k)//���±��м�ֵ����Ҫ���ҵ���ʱ 
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid); 
			break; 
		}
	} 
	return 0;
} 
