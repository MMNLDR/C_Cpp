#include <stdio.h>

float power( float x, int n )
{
    float t = 1;
    for(int i = 1; i <= n; i++)
    {
        t = x*t;
    }
    return t;
}

int main()
{
	
	float x;
	int n;
	scanf("%f %d", &x, &n);
	printf("%f\n", power(x, n));
	    
	return 0;
} 
