#include <stdio.h>

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else if (n <= 1)
        return 1;
}

int main()
{
	int n, i;
	for(i = 1; i <= 10; i++)
	printf("iΪ%dʱ,n�Ľ׳ˣ�%d\n", i, factorial(i));
	    
	return 0;
} 
