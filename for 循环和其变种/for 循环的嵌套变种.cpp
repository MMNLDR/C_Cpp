#include <stdio.h>
//不够熟练时不要随便省略 
int main()
{
	int i = 0;
	int j = 0;
	
	for(; i<10; i++)
	{//for循环的嵌套 
		for(; j<10; j++)//省略j=0导致j被赋值为10以后进行第二次i的for循环j没有初始化为0 
		{
			printf("hehe\n");
			
		}
	}
	return 0;
}
