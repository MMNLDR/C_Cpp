#include <stdio.h>


int pjz(int n)
{ 
	int sum = 0;
	int d;
	int i = n ;
	printf("����%d�����ݣ�\n",n);
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
	scanf("%d������", &n);
	c = pjz(n);
	printf("\n%d", c);
	 
	return 0;
} 
