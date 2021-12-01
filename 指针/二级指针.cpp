#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	int* * ppa = &pa;//ppa就是二级指针   
	//int*表示指向对象的类型是int*，第二个*表示这是一个指针变量 
	printf("%d\n", **ppa);
	printf("%d\n", a);
	
	return 0;
} 
