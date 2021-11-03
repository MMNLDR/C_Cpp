#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//(目标， 要改变的值， 改变的字节数) 
	printf("%s\n", arr);
	
	return 0;
} 
