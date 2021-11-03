#define _CRT_SUCURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	printf("请输入年龄；");
	scanf("%d", &i);
	//最简单的if语句 
    if(i<18)//判断i的大小是否小于18 
    printf("未成年");//小于18则执行if后面的语句 
    else //判断不小于18时跳过if后面的语句进行其他程序的判断 
	printf("已成年"); //第二个分支 
	return 0;
}
