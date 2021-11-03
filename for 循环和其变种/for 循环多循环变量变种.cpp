#include <stdio.h>

int main()
{
	int x, y;
	for(x = 0, y = 0; x<2 && y<5; ++x, y++)//同时满足x和y的条件 
	{
		printf("hehe\n");
	}
	return 0;
} 
