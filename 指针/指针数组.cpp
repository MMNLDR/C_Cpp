#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ� 
	//ָ������ - ���ָ��
	int* arr[10] = {&a, &b, &c};//��ָ��������� 
	int i = 0;
	for(i = 0; i<=10; i++)
	{
		printf("%d ", *(arr[i])); 
	}
	
	return 0;
}
