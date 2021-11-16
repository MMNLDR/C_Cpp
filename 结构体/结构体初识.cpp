#include <stdio.h>

//创建了一个结构体类型struct sut 
struct sut
{
	char name[20];
	int age;
	char id[20];	
};

int main()
{
	int a = 10;
	//使用suruct sut类型创建了一个学生对象s1，并将其初始化 
	struct sut s1 = {"张三", 16, "202150270142"}; 
	struct sut* ps = &s1;   
	
/*	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id); 
	//结构体指针->成员名 
*/ 

/*	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//结构体变量.成员名 
*/	
	return 0;
}
