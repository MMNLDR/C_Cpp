//������������Ϸ
#include <stdio.h> 
#define _CRT_SUCURE_NO_WARNINGS
#define ROW 3//�������� 
#define COL 3//�������� 

void menu()
{
	printf("*****************************\n");
	printf("****   1.play   0.exit   ****\n");
	printf("*****************************\n");
}

//��ʼ�����ɿո� 
void InitBoard(char board[ROW][COL], int row, int col)//����
{
	int i = 0;
		int j = 0;
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
				board[i][j] = ' ';	
			}
		}
}
 
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i =0;
	for(i=0; i<row; i++)
	{
		//1.��ӡһ�е�����
		int j = 0;
		for(j=0; j<col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		//2.��ӡ�ָ���
		if(i<row-1)
		{
			for(j=0; j<col; j++)
			{
				printf("---");
				if(j<col-1)
				printf("|");
			}	
			printf("\n");
		}
	}
}

//��Ϸ�㷨��ʵ�� 
void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	
	 
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				printf("������\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;	
		} 	
	}while(input);
}


int main()
{
	 test();
		
	return 0;
} 
