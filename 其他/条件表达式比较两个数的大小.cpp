
int main()
{
	// exp1 ? exp2 ；exp3    exp2 和 exp3 都是整个程序的结果 
	//当exp1的条件为真时执行exp2的程序，当exp1的条件为假的时候执行exp3的程序
	int a = 0;
	int b = 0;
	//程序1
	if(a < 5)
		b = 3;
	else
		b = -3;
	 
	//程序2
	b = (a < 5 ? 3 : -3); 
	
	return 0;
} 
