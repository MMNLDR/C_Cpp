#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	int* * ppa = &pa;//ppa���Ƕ���ָ��   
	//int*��ʾָ������������int*���ڶ���*��ʾ����һ��ָ����� 
	printf("%d\n", **ppa);
	printf("%d\n", a);
	
	return 0;
} 
