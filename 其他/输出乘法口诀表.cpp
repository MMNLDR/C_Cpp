#include <stdio.h>

int main()
{
	int i = 0;
	for(i=1; i<=9; i++)//ȷ����ӡ9�� 
	{
		int j = 1;
		for(j=1; j<=i; j++)//��ӡ1�У�ÿ�ж����� 
		{
			printf("%d*%d=%-2d", i, j, i*j);//����-��ӡ�ַ������  ����2-��ӡ��λ��������λ���ÿո���     
		}
		printf("\n");
	}
	
	return 0;
}
