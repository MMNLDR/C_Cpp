#include <stdio.h>

int main()
{
	const int num = 10;
	
//	const int* p = &num;
//	*p = 20;//const����ָ�������*���ʱ�����ε���*p�����Բ���ͨ��p���ı�*p(num)��ֵ 
//	p = &n;

//	int *const p = &num; 
//	*p = 20;//const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı��� 
//	p = &n;

	printf("%d\n", num);
	
	return 0;
} 
