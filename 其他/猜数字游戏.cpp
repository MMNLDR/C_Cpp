#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void menu()//menu()函数-菜单函数 
{
	printf("*****************************");
	printf("****1.进入游戏 0.退出游戏****");
	printf("*****************************");
} 

//RAND_MAX - 32767
int ret = 0;
void game() 
{
	
	//1.生成一个随机数
	//拿时间戳来设置随机数的生成起始点 
	//生成time_t形式的时间戳  time函数的参数为(time_t *timer)  
	//unsigned int 为返回类型    NULL为空指针，当不想让这个数产生什么实际效果时可以这样写 
	//时间戳-当前计算机的时间减去计算机的起始时间(1970.1.1.0:0:0) = (xxxx)秒 
	int ret = rand()%100+1;//生成1-100随机数   rand()函数-设置一个随机值 
	//rand()%100表示取100以内的随机数，即取了随机数后再对100取余，因而是0~99 
	//2.猜数字
	int guess = 0;
	while(1)
	{
		printf("猜猜数字:");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("猜大了\n"); 
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		} 
		else if(guess==ret)
		{
			printf("恭喜你，猜对了\n");
			break; 
		}
	} 
}

int main()
{	
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();//猜数字游戏过程   game()函数-游戏函数 
			break; 
		case 2:
			printf("退出游戏\n"); 
			break;
		default:
			printf("输入错误，请输入1/0"); 
			break;
			 
		}
	}while(input);
	
	return 0;
}
