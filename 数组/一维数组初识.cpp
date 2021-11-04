#include <stdio.h>

//一维数组的创建  
//type_t arr_name [const_n];  []内必须为一个常量 
//type_t 是指数组的元素类型 
//const_n 是一个常量表达式，用来指定数组的大小 

//一维数组的初始化是指，再创建数组的同时给数组的内容一些合理的初始值(初始化)，即在创建时就进行赋值 

//int main()
//{
	//创建一个数组-存放10个整型
//	int arr[10] = {1,2,3}; //不完全初始化，剩下的元素默认为初始值为0
	 
//	char arr1[5] = {'a', 98};//数组存储的是A码 
//	char arr2[5] = "ab";
	
//	char arr3[] = "abcdef";//存储包括默认的\0 
//	printf("%d\n", sizeof(arr3));// sizeof 计算arr3所占空间的大小(包括\0所占的空间0) 
//	printf("%d\n", strlen(arr3));// strlen 求字符串长度(\0之前的字符个数) 
	
//	strlen 是求字符串长度的-只能针对字符串求长度 - 库函数-使用时需要引头文件 
//	sizeof 计算变量，数组，类型的大小-单位是字节 - 操作符 

//	char arr[] = "abcdef";// [a] [b] [c] [d] [e] [f] [\0]
//	printf("%c\n", arr[3]);// 打印字符d，输入其下标(下标默认从0开始) 

//	求数组大小(包含\0)
//	char arr[] = "abcdef";
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0; i<len; i++)
//	{
//		printf("%c ", arr[i]);
//	} 

//	求数组大小(不包括\0) 
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);// 计算数组大小 
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}

//	总结
//	数组是使用下标来访问的，下标是从0开始的
//	数组的大小可以通过计算机得到
 
//	return 0;
//}

//一维数组在内存中的存储 	
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);// 打印数组元素存储的地址		
//		数组在内存中是连续存放的，且各个元素地址间相隔4个字节，由低地址到高地址	
//	} 
//
//	return 0;	 
//}






