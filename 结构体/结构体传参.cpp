#include <stdio.h>

 typedef struct Stu
 {
 	char name[20];
 	short age;
 	char tele[12];
 	char sex[5];
 };
 
 void Printl1(Stu tmp)
 {
	printf("name；%s\n", tmp.name);
	printf("age；%d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex；%s\n", tmp.sex);
 }
 
void Printl2(Stu* ps)
{
	printf("name；%s\n", ps->name);
	printf("age；%d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex；%s\n", ps->sex);
}
 
 int main()
 {
 	Stu s = {"李四", 40, "1598886688","男"};
 	//打印结构体数据
	//问 Printl1 和 Printl2 哪个好？ 
	//Printl2 更优，减少空间和时间浪费 
	/*原因 函数传参时，参数是需要压栈的，如果传递一个结构体对象时，
	结构体过大，结构体压栈的系统开销过大，所以会导致性能的下降*/ 
	//结论 结构体传参时，要传结构体的地址 
	Printl1(s);
	Printl2(&s);
 	return 0;
 }
