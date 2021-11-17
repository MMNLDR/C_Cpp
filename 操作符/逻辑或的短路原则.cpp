#include <stdio.h>

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;// ||的短路原则， 当判断为真时， 后面的程序将不再执行 
	//a,b,c,d分别是几？ 
    //a自加1，其他不变，2，2，3，4 
	
	return 0;
} 
