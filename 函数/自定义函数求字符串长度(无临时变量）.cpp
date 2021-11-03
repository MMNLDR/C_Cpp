#include <stdio.h>

//使用递归的方法 
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
 
int my_strlen(char* str)
{
	if(*str != '\0')
	return 1+my_strlen(str+1);
	else
	return 0;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//arr为数组，数组传参，传过去的不是整个数组，而是数组首元素的地址 
	printf("字符串长度= %d", len); 
	
	return 0;
}
