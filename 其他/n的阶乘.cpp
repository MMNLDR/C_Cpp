#include <stdio.h>

int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for(n=1; n<=3; n++)
	{
		ret = ret * n;
		sum = sum + ret;//nµÄ½×³Ë 
	}
	printf("%d ", sum);
	return 0;
} 
