#include <stdio.h>

//返回1 - 小端    返回0 - 大端 
char check_sys()
{
	int a = 1;
	return *(char*)&a;
} 
//指针类型决定了指针类型解引用操作符能访问几个字节
//char 访问1个字节   int 访问了4给字节
//指针类型决定了指针+1，-1，加的或者减的是几个字节
//char+1 跳过一个字节   int+1 跳过4个字节 

int main()
{
	int ret = check_sys();
	if(ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	 
	return 0;
} 
