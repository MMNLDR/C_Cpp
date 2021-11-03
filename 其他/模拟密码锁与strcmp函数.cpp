#define _CRT_SUCURE_NO_WARNINGS

#include <string.h> 
#include <stdio.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0; i<3; i++)
	{
		printf("请输入密码；");
		scanf("%s", &password);
		
		if(strcmp(password, "123456") == 0)//==不能用来比较两个数的大小 
		{//strcmp函数-用于比较两数大小，若相等则返回0，前面大返回大于0的数，前面小返回小于0的数，头文件<string.h> 
			printf("登入成功");
			break;
		}	
		else
		{
			printf("密码输入错误\n"); 
		}
	}
	if(i == 3)
	{
		printf("三次密码均输入错误，登入失败");
	}
	return 0;
} 
