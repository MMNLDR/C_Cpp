#include <stdio.h>

//����1 - С��    ����0 - ��� 
char check_sys()
{
	int a = 1;
	return *(char*)&a;
} 
//ָ�����;�����ָ�����ͽ����ò������ܷ��ʼ����ֽ�
//char ����1���ֽ�   int ������4���ֽ�
//ָ�����;�����ָ��+1��-1���ӵĻ��߼����Ǽ����ֽ�
//char+1 ����һ���ֽ�   int+1 ����4���ֽ� 

int main()
{
	int ret = check_sys();
	if(ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	 
	return 0;
} 
