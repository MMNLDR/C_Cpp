#include <stdio.h>

int main()
{
	const int num = 10;
	
//	const int* p = &num;
//	*p = 20;//const放在指针变量的*左边时，修饰的是*p，所以不能通过p来改变*p(num)的值 
//	p = &n;

//	int *const p = &num; 
//	*p = 20;//const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了 
//	p = &n;

	printf("%d\n", num);
	
	return 0;
} 
