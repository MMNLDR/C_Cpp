#include <stdio.h>

int main()
{
	int i = 0;
	for(i=1; i<=9; i++)//确定打印9行 
	{
		int j = 1;
		for(j=1; j<=i; j++)//打印1行，每行多少项 
		{
			printf("%d*%d=%-2d", i, j, i*j);//负号-打印字符左对齐  数字2-打印两位数，不足位数用空格补齐     
		}
		printf("\n");
	}
	
	return 0;
}
