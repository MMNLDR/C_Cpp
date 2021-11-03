#include <stdio.h>

int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("字符串长度= %d", len);//arr为数组，数组传参，传过去的不是整个数组，而是数组首元素的地址
	
	return 0;
}
