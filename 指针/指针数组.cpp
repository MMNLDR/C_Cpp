#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整形数组 - 存放整形
	//字符数组 - 存放字符 
	//指针数组 - 存放指针
	int* arr[10] = {&a, &b, &c};//将指针存入数组 
	int i = 0;
	for(i = 0; i<=10; i++)
	{
		printf("%d ", *(arr[i])); 
	}
	
	return 0;
}
