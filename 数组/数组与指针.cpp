#include <stdio.h>

int main()
{
/* 
	int arr[10] = { 0 };
	printf("%p\n", arr);//��ַ - ������Ԫ�صĵ�ַ 
	printf("%p\n", arr+1);
	
	printf("%p\n", &arr[0]); 
	printf("%p\n", &arr[0]+1);
	
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	
	//�������� 
	//1. &arr - &������������Ԫ�ص�ַ-��������ʾ��������
	//&������ ȡ��������������ĵ�ַ 
	
	//2. sizeof(arr) - sizeof(������) - ��������ʾ�������� - 
	//sizeof(������)���������������Ĵ�С
*/
/*
	//ͨ��ָ���������	 
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
*/	 
	return 0;
} 
