#include <stdio.h>

//结构成员的类型可以是标量，数组，指针，甚至是其他结构体 

//struct - 结构体关键字  
//stu - 结构体标签  
//struct stu - 结构体类型 

/*方1 
struct stu 
{
	//成员变量 
	//定义结构体类型 
	//struct是结构体关键字
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//创建三个全局的结构体变量
*/

//方2 
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;//struct stu被改名为stu 

	
int main()
{
	//struct stu sa;//创建一个局部的结构体变量 方1 
	stu sb = {"张三", 20, "123456789", "男"};
	//方2  初始化 在定义变量的同时赋予初值 
	
	return 0;
} 
