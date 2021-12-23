#include <stdio.h>

//指针数组 是数组，用来存放指针的 
int main()
{
	/*
	//指针数组概念 
	int arr[10] = {0};//整形数组
	char ch[5] = { 0 };//字符数组
	int* parr[4];//存放整形指针的数组 - 指针数组 
	char* pch[5];//存放字符指针的数组 - 指针数组 
	*/
	
	/*
	//指针数组低级用法 
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* arr[4] = {&a, &b, &c, &d};
	int i = 0;
	for(i = 0; i < 4; i++)
	{
		printf("%d ", *(arr[i]));
	} 
	*/
	/*
	//指针数组正常用法之一 
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5, 6 };
	int arr3[] = { 3, 4, 5, 6, 7 };
	//存入的是类型是int*，成员为每个数组的首地址
	int* parr[] = { arr1, arr2, arr3 };
	//打印parr指针数组 
	int i = 0;
	for(i = 0; i < 3; i++)//3行 
	{
		int j = 0;
		for(j = 0; j < 5; j++)//每行5个成员 
		{
			printf("%d ", *(parr[i] + j));
			//打印首地址元素向后移动j位后的数 
		}
		printf("\n");
	}
	*/ 
	return 0;
}
