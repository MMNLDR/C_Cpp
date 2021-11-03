#define _CRT_SUCURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch(day)//day必须为整形常量 
	{
		case 1: //csse后必须跟整形常量 
		printf("星期一");
		break; //break - 终止 防止把后续程序一起执行 跳出当前代码块 
		case 2:
		printf("星期二");
 		break; 
    	case 3: 
    	printf("星期三");
		break; 
		case 4:
		printf("星期四");
		break; 
		case 5: 
		printf("星期五");
		break; 
		case 6:
		printf("星期六");
		break; 
	    case 7:
	    printf("星期天"); 
	    break;
	    default://当输入除casee规定以外所有的值时执行 
		printf("输入错误"); 
		break; 
		 
	} 
	return 0;
} 
