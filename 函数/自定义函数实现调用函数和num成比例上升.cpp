#include <stdio.h>

void add(int* pa)
{
	(*pa)++;
}

int main()
{
	int num = 0;
	add(&num);
	printf("%d ", num);
	add(&num);
	printf("%d ", num);
	add(&num);
	printf("%d ", num); 
	 
	return 0;
}
