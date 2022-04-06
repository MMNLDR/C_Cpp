#include <stdio.h>


int pjz(int n)
{ 
	int sum = 0;
	int d;
	int i = n ;
	printf("输入%d个数据：\n",n);
	while(i > 0)
	{
		scanf("%d",&d);
		sum += d;
		i--;
	}
	int pjz = sum / n ;
	return pjz;
}

int main()
{
	
	int a, b, c, n;
	scanf("%d组数据", &n);
	c = pjz(n);
	printf("\n%d", c);
	 
	return 0;
} 
