#include <stdio.h>

//ʹ�õݹ�ķ��� 
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
 
int my_strlen(char* str)
{
	if(*str != '\0')
	return 1+my_strlen(str+1);
	else
	return 0;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//arrΪ���飬���鴫�Σ�����ȥ�Ĳ����������飬����������Ԫ�صĵ�ַ 
	printf("�ַ�������= %d", len); 
	
	return 0;
}
