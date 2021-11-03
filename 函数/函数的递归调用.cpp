 #include <stdio.h>
 #define _CRT_SUCURE_NO_WARNINGS
 
 //递归的两个必要条件
 //1.存在限制条件，当满足中国限制条件的时候，递归便不再继续
 //2.每次递归调用之后越来越接近这个限制条件  
 
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
 	//递归 
 	print(num);
 	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1) 2 3 4
	
	return 0;
 }
