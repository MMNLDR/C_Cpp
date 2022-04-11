#include <stdio.h>
#include <stdlib.h> 

  int count = 0;
  int hanoi ( int n, char a,  char b,  char c )         
    { 
	 	if  (1 == n)                                          
           {
              printf("%c-->%c\n",a,c);
              count++;
            }
         else
            {
              hanoi ( n-1,  a,  c,  b ) ;                  
              printf("%c-->%c\n",a , c) ; 
			  count++;              
             hanoi ( n-1,  b,  a,  c ) ;                  
	      }
	      return count;
  }
  

   int main ()
   { 
     	int n = 10;
      	int sum = hanoi ( n,  'A' ,  'B' , 'C' ) ;
		system("cls");      	
        printf("%d´Î", sum);
      	return 0;
   }
