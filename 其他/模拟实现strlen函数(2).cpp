#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while(*str)
	{
		str++;
		count++;
	}
	return count;
}

int main()
{
	char* p = "abcdef";
	int len = my_strlen(p);
	printf("%d\n", len);
	
	return 0;
} 
