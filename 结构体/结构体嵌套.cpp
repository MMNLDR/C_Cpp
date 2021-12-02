#include <stdio.h>

typedef struct S
{
	int a;
	char c;
	char arr[20];
	double d;	
}s; 

struct T
{
	char ch[10];
	S s;
	char *pc;
};

int main()
{
	struct T t = {"hehe", {100, 'w', "hello world", 3.14}, NULL};
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	printf("%lf\n", t.s.d);
	printf("%s\n", t.pc);
	
	return 0;
} 
