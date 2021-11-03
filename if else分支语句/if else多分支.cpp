#define _CRT_SUCURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	printf("请输入年龄；");
	scanf("%d", &i);
	if(i<18)
	{//｛｝内的空间被称为代码块   如果要执行多个条件则必须在代码块内执行，否则语法错误无法执行 
		printf("未成年");
		printf("不能谈恋爱"); 
	}
	else if(i>18 && i<30)//每一个else都对应正上方最近的一个if语句，else就近原则 
	{
		printf("青年时期");
	} 
	else if(i>=30 && i<50)
	{
		printf("壮年时期"); 
	}
	else if(i>=50 && i<100)
	{
		printf("老年时期"); 
	}
	else if(i == 100)//注意=和==的区别，=是赋值，==是判断 
	{
		printf("世纪老人"); 
	} 
	else if(i>100)
	{
		printf("活神仙在世");
	}
	return 0;
}
