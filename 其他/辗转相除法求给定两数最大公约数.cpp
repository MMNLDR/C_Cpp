#define _CRT_SUCURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int r;
	int m;
	int n;
	scanf("%d%d", &m, &n);
	
	while(m%n)
	{
		r = m%n;
		m = n;
		n = r;
	} 
	printf("最大公约数为；%d", n);
	
	return 0;
} 
