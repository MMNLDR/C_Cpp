#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

//goto语句常用于终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环
 int main()
 {
 	//shutdown -s -t 60 60秒内关机
	//system() - 执行系统命令的函数
	char input[20] = {0}; 
 	system("shutdown -s -t 60");
again:
 	printf("请注意，你的电脑将在1分钟内关机，如果输入；我是猪， 就取消关机\n请输入");
 	scanf("%s", &input);
 	if(strcmp(input, "我是猪")==0)//专门用于比较两个字符串-strcmp()  返回0说明相等 
 	{
	 	system("shutdown -a");//取消关机 
	} 
	else
	{
		goto again;
	}  
 	return 0;
 }
