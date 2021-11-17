#include <stdio.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//逻辑操作符的短路原则， 只要有一边为假，则后面的都不执行 
	// a b c d 分别是几？ 
	//a自加1，b，c，d不变，所以分别是1，2，3，4 
	return 0;
} 
