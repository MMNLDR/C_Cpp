#define _CRT_SUCURE_NO_WARNINGS

#include <string.h> 
#include <stdio.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0; i<3; i++)
	{
		printf("���������룻");
		scanf("%s", &password);
		
		if(strcmp(password, "123456") == 0)//==���������Ƚ��������Ĵ�С 
		{//strcmp����-���ڱȽ�������С��������򷵻�0��ǰ��󷵻ش���0������ǰ��С����С��0������ͷ�ļ�<string.h> 
			printf("����ɹ�");
			break;
		}	
		else
		{
			printf("�����������\n"); 
		}
	}
	if(i == 3)
	{
		printf("���������������󣬵���ʧ��");
	}
	return 0;
} 
