    #include <stdio.h>
    
    int getnum(int n)
	    	{
				if(n == 1 || n == 2)
				return 1;
				else
				return getnum(n-2) + getnum(n-1);
			}
			
    int main()
    {
        /*int i, a1 = 1, a2 = 1, a3, m = 12; 
        if(m <= 2)
        {
            printf("����ֻ����");
        }
        else if(m > 2)
        {
            for(i = 3; i <= m; i++)
            {
                a3 = a1 + a2;
                a1 = a2;
                a2 = a3;
            }
            printf("%d���µ�ʱ��������Ϊ��%d\n", m, a3);
        }
        */
        
        printf("%dֻ", getnum(12));
        
        return 0;
    }
    
