#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for(i=0; i<sz-1; i++)
	{
		//ÿһ��ð������
		int flag = 1;//������һ����Ҫ����������Ѿ������� 
		int j = 0;
		for(j=0; arr[j]>arr[j+1]; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;//���������������ʵ����ȫ���� 
			} 
		} 
		if(flag == 1)
		{
			break;
		}
	}
}
	
//ʵ��ð������������һ�������������� 
int main()
{
	int i = 0; 
	//��arr���������ų�����
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ�ʴ��ݵ���������Ԫ�صĵ�ַ 
	bubble_sort(arr, sz);//ð����������
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	} 
	
	return 0;
}
