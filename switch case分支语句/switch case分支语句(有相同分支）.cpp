#define _CRT_SUCURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch(day)
	{
		case 1: 
		case 2:
    	case 3: 
		case 4:
		case 5: //break有时候并不需要 
	    	printf("工作日");
	    	break; 
		case 6:
	    case 7:
	        printf("休息日"); 
	        break;
		 
	} 
	return 0;
}
