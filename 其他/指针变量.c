#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 10;//申请了四个字节的空间
	printf("%p\n", &a);// 打印a所在的地址（随机变化）
	int* p = &a;//p是一个指针变量，储存了a的地址,变量类型为int* 
	printf("%p\n", p); //通过指针变量p直接找到其中储存的地址 
	*p = 20;//改变a储存的内容   * - 解引用操作符/间接访问操作符 
	printf("%d\n", a); 
	return 0;
} //第一颗*说明p为指针变量，第二颗*起解应用操作符的作用 
