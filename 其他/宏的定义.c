#include <stdio.h>
#define MAX(X, Y) (X>Y?X:Y)//宏的定义 
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
    max = MAX(a, b);//a,b分别带入X,Y 
	printf("max = %d\n", max);//打印最大值 
	return 0;
} 
	
	
	

	
