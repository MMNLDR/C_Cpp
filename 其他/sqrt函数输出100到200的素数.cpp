#include <stdio.h>
#include <math.h>// 数学库函数头文件 

int main()
{
	int count = 0;
	int i = 0;
	int j = 0;
	for(i=100; i<=200; i++)
	{
		//判断i是否为素数
			for(j=2; j<=sqrt(i); j++)//sqrt - 开平方的数学库函数 
			{
				if(i%j == 0)
				{
					break;
				}
			} 
			if(j > sqrt(i))
			{
				count++;
				printf("%d ", i);
			}
	}
	printf("\ncount = %d\n", count)	;
	
	return 0;
}  
