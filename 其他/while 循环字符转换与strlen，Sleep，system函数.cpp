#include <stdio.h>
#include <stdlib.h>//system��ͷ�ļ� 
#include <string.h>//strlen��ͷ�ļ� 
#include <windows.h>//Sleep��ͷ�ļ� 

#define _CRT_SUCURE_NO_WARNINGS
 
int main()
{
	char arr1[] = "welcome to bit !!!!!!!!!";
	char arr2[] = "########################";
	int left = 0;
	int right = strlen(arr1)-1;//strlen - ��ȡ�������ַ�����������\0 
	
	while(left<=right) 
	{
	arr2[right] = arr1[right];
	arr2[left] = arr1[left];
	//��arr1�ĵ�һ���͵����ڶ����ַ���ֵ��arr2�ĵ�һ���͵����ڶ������� 
	Sleep(1000);//Sleep���� - ��Ϣ   1000 - 1000���룬1�� 
	system("cls");//system - ִ��ϵͳ�����һ������   cls - �����Ļ 
	printf("%s\n", arr2);
	left++;
	right--;
	
	} 
	
	return 0;
} 
