#define _CRT_SUCURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	printf("���������䣻");
	scanf("%d", &i);
	if(i<18)
	{//�����ڵĿռ䱻��Ϊ�����   ���Ҫִ�ж������������ڴ������ִ�У������﷨�����޷�ִ�� 
		printf("δ����");
		printf("����̸����"); 
	}
	else if(i>18 && i<30)//ÿһ��else����Ӧ���Ϸ������һ��if��䣬else�ͽ�ԭ�� 
	{
		printf("����ʱ��");
	} 
	else if(i>=30 && i<50)
	{
		printf("׳��ʱ��"); 
	}
	else if(i>=50 && i<100)
	{
		printf("����ʱ��"); 
	}
	else if(i == 100)//ע��=��==������=�Ǹ�ֵ��==���ж� 
	{
		printf("��������"); 
	} 
	else if(i>100)
	{
		printf("����������");
	}
	return 0;
}
