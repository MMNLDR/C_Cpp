#include <stdio.h>
#include _CRT_SUCURE_NO_WARNINGS

int fac(int n)
{
	if(n<=0)
	return 0;
	else
	return n*fac(n-1);
	
}

int main()
{
	//nµÄ½×³Ë 
	int n = 0;
	int ret = 0;
	scanf("%d ", &n);
	ret = fac(n);
	printf("%d\n", ret);
	
	return 0;
}    
