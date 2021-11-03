#include <stdio.h>
#include <stdlib.h>//system的头文件 
#include <string.h>//strlen的头文件 
#include <windows.h>//Sleep的头文件 

#define _CRT_SUCURE_NO_WARNINGS
 
int main()
{
	char arr1[] = "welcome to bit !!!!!!!!!";
	char arr2[] = "########################";
	int left = 0;
	int right = strlen(arr1)-1;//strlen - 读取数组内字符数，不包括\0 
	
	while(left<=right) 
	{
	arr2[right] = arr1[right];
	arr2[left] = arr1[left];
	//将arr1的第一个和倒数第二个字符赋值到arr2的第一个和倒数第二个上面 
	Sleep(1000);//Sleep函数 - 休息   1000 - 1000毫秒，1秒 
	system("cls");//system - 执行系统命令的一个函数   cls - 清空屏幕 
	printf("%s\n", arr2);
	left++;
	right--;
	
	} 
	
	return 0;
} 
