#include <stdio.h>
#define MAX(X, Y) (X>Y?X:Y)//��Ķ��� 
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
    max = MAX(a, b);//a,b�ֱ����X,Y 
	printf("max = %d\n", max);//��ӡ���ֵ 
	return 0;
} 
	
	
	

	
