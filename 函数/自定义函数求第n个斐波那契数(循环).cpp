#include <stdio.h>
#define _CRT_SUCURE_NO_WARNINGS

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	
	while(n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

//求第n个斐波那契数 
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD - 测试驱动开发，先确定函数怎么用再去实现函数的功能 
	ret = fib(n);
	printf("%d ", ret);
	
	return 0;
} 
