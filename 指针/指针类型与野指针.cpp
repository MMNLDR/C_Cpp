#include <stdio.h>

int main()
{
//指针 - 存放地址或者内存编号的变量
//(存放在指针中的值都被当成地址处理) 
/*	
	int a = 10;
	int* p = &a;//将a的地址存放在p变量中，p就是一个指针变量 
	//在32位地址中存储一个地址要占4个字节的大小，64位则是8个字节的大小 
*/ 


//指针类型 
/*	
	//每个指针类型决定了指针进行解引用操作时
	//可以访问的空间大小
	//int* p能够访问4个字节
	//char* p能够访问1个字节
	//double* p能够访问8个字节 
	 
	int a = 0x11223344; 
	//int* pa = &a;
	//*pa = 0;//将4个字节全部改为0 
	
	char* pc = &a;
	*pc = 0;//仅将一个字节改为0 
	 
	//printf("%p\n", pa);
	//printf("%p\n", pc); 

	//指针类型决定了，指针走一步多远(指针的步长) 
	//int*p; p+1 --> 4
	//char*p; p+1 --> 1
	//double*p; p+1 --> 8
	//单位为字节
	 
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	
	printf("%p\n", pa);//0095FB58
	printf("%p\n", pa+1);//0095FB5C
	
	printf("%p\n", pc);//00955FB58
	printf("%p\n", pc+1);//0095FB59 
*/
	

//野指针 - 指针指向的位置是不可知的(随机的，不正确的，没有明确限制的) 
/*	
	//指针未初始化导致产生野指针 
	int a;//局部变量不初始化，默认为随机值 	
 	int *p;//局部的指针变量，就被初始化随机值
	*p = 20; 
	
	//指针越界访问导致产生野指针
	int arr[10] = { 0 };
	int *p = arr;
	int i = 0;
	for(i = 0; i < 11; i++)
	{
		*(p++) = 1;//当指针指向范围超过数组arr的范围时，p就是野指针 
	}
	
	//指针指向的空间释放导致产生野指针
	int* test()//函数体结束时把内存空间释放，临时变量销毁 
	{ 
		int a = 10;
		return &a;
	}
	int *p = test();
	*p = 20;//此时将一个值附给了一个已经被销毁了的临时变量，产生了野指针 
	
	//int* p = NULL;//当不知道要初给指针变量始化什么值时可以赋一个空指针，NULL - 空指针  
*/
	return 0;
}

 
