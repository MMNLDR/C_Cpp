#include <stdio.h>

int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("�ַ�������= %d", len);//arrΪ���飬���鴫�Σ�����ȥ�Ĳ����������飬����������Ԫ�صĵ�ַ
	
	return 0;
}
