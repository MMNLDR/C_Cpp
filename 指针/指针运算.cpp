#include <stdio.h>

int main()
{
//指针运算
/*
	//指针+整数 
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int* p = arr;
	for(i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
	}
	
	//指针-整数
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int* p = &arr[9]; 
	for(i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p--;
	}
	
	//指针-指针
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9] - &arr[0]);//指针减去指针得到的是中间的元素个数(小地址减大地址的绝对值) 
	//&arr[9] - &ch[0];//err这是错误的写法，答案是无法预测的值 
	
	//指针的关系运算
	//方1
	for(vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
	//方2
	for(vp = &values[N_VALUES-1]; vp >= &values[0]; vp--)
	{
		*vp = 0;
	}
	//方1和方2虽然都可以运行，但是方2不符合标准规定 
	
//标准规定；允许指向数组元素的指针与指向数组最后一个元素后面的那个内存
//位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
*/ 
	 
	return 0;
} 
