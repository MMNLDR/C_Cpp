#include <stdio.h>

int main()
{
/* 
	int arr[10] = { 0 };
	printf("%p\n", arr);//地址 - 数组首元素的地址 
	printf("%p\n", arr+1);
	
	printf("%p\n", &arr[0]); 
	printf("%p\n", &arr[0]+1);
	
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	
	//两个例外 
	//1. &arr - &数组名不是首元素地址-数组名表示整个数组
	//&数组名 取出的是整个数组的地址 
	
	//2. sizeof(arr) - sizeof(数组名) - 数组名表示整个数组 - 
	//sizeof(数组名)计算的是整个数组的大小
*/
/*
	//通过指针访问数组	 
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
