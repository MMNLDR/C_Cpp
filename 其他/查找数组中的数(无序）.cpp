#include <stdio.h>

int sz;
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[i]);
	for(i=0; i<sz; i++);
	{
		if(k == arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
		}
		
	}
	if(i == sz)
	{
		printf("û�ҵ�"); 
	}
	
	return 0;
} 
