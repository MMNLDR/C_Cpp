#define _CRT_SUCURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if(a<b)
	{
		int a1 = a;//·ÀÖ¹aµÄÔ­Öµ¶ªÊ§ 
		a = b;
		b = a1;
	}
	if(a<c)
	{ 
		int a2 = a;
		a = c;
		c = a2;
	}
	if(b<c)
	{
		int b1 = b;
		b = c;
		c = b1;
	}
	printf("%d %d %d", a, b, c);
					
	return 0;
}
