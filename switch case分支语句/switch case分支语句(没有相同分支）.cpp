#define _CRT_SUCURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch(day)//day����Ϊ���γ��� 
	{
		case 1: //csse���������γ��� 
		printf("����һ");
		break; //break - ��ֹ ��ֹ�Ѻ�������һ��ִ�� ������ǰ����� 
		case 2:
		printf("���ڶ�");
 		break; 
    	case 3: 
    	printf("������");
		break; 
		case 4:
		printf("������");
		break; 
		case 5: 
		printf("������");
		break; 
		case 6:
		printf("������");
		break; 
	    case 7:
	    printf("������"); 
	    break;
	    default://�������casee�涨�������е�ֵʱִ�� 
		printf("�������"); 
		break; 
		 
	} 
	return 0;
} 
