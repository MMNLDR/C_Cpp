#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void menu()//menu()����-�˵����� 
{
	printf("*****************************");
	printf("****1.������Ϸ 0.�˳���Ϸ****");
	printf("*****************************");
} 

//RAND_MAX - 32767
int ret = 0;
void game() 
{
	
	//1.����һ�������
	//��ʱ����������������������ʼ�� 
	//����time_t��ʽ��ʱ���  time�����Ĳ���Ϊ(time_t *timer)  
	//unsigned int Ϊ��������    NULLΪ��ָ�룬�����������������ʲôʵ��Ч��ʱ��������д 
	//ʱ���-��ǰ�������ʱ���ȥ���������ʼʱ��(1970.1.1.0:0:0) = (xxxx)�� 
	int ret = rand()%100+1;//����1-100�����   rand()����-����һ�����ֵ 
	//rand()%100��ʾȡ100���ڵ����������ȡ����������ٶ�100ȡ�࣬�����0~99 
	//2.������
	int guess = 0;
	while(1)
	{
		printf("�²�����:");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n"); 
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		} 
		else if(guess==ret)
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();//��������Ϸ����   game()����-��Ϸ���� 
			break; 
		case 2:
			printf("�˳���Ϸ\n"); 
			break;
		default:
			printf("�������������1/0"); 
			break;
			 
		}
	}while(input);
	
	return 0;
}
