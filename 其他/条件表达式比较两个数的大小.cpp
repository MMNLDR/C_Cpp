
int main()
{
	// exp1 ? exp2 ��exp3    exp2 �� exp3 ������������Ľ�� 
	//��exp1������Ϊ��ʱִ��exp2�ĳ��򣬵�exp1������Ϊ�ٵ�ʱ��ִ��exp3�ĳ���
	int a = 0;
	int b = 0;
	//����1
	if(a < 5)
		b = 3;
	else
		b = -3;
	 
	//����2
	b = (a < 5 ? 3 : -3); 
	
	return 0;
} 
