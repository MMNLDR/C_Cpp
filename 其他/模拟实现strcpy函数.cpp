#include <stdio.h>

void my_strcpy(char* dest, char* str)
{
	while(*dest != '\0')
	{
	*dest = *str;
	dest++;
	str++;
	}
}

int main()
{
	char arr1[] = "##############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	
	return 0;
} 
