#include <stdio.h>
#include <math.h>// ��ѧ�⺯��ͷ�ļ� 

int main()
{
	int count = 0;
	int i = 0;
	int j = 0;
	for(i=100; i<=200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
			for(j=2; j<=sqrt(i); j++)//sqrt - ��ƽ������ѧ�⺯�� 
			{
				if(i%j == 0)
				{
					break;
				}
			} 
			if(j > sqrt(i))
			{
				count++;
				printf("%d ", i);
			}
	}
	printf("\ncount = %d\n", count)	;
	
	return 0;
}  
