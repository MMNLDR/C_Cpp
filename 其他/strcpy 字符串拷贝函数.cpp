 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
 	char arr1[] = "bit";
 	char arr2[20] = "##########";
 	strcpy(arr2, arr1);//strcpy函数-字符串拷贝   前面的数是目的地，把后面的数拷贝到前面的数上
	//注意后面的数拷贝到前面的数时，如果前面的长度不够则会出现溢出的情况
	printf("%s\n", arr2); 
 	
 	return 0;
 } 
