 #include <stdio.h>
 #define _CRT_SUCURE_NO_WARNINGS
 
 //�ݹ��������Ҫ����
 //1.���������������������й�����������ʱ�򣬵ݹ�㲻�ټ���
 //2.ÿ�εݹ����֮��Խ��Խ�ӽ������������  
 
 void print(int n)
 {
 	if(n>9)
 	{
		print(n/10); 	
	} 
	printf("%d ", n%10);
 }
 
 
 int main()
 {
 	unsigned int num = 0;
 	scanf("%d", &num);//1234
 	//�ݹ� 
 	print(num);
 	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4
	
	return 0;
 }
