 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
 	char arr1[] = "bit";
 	char arr2[20] = "##########";
 	strcpy(arr2, arr1);//strcpy����-�ַ�������   ǰ�������Ŀ�ĵأ��Ѻ������������ǰ�������
	//ע��������������ǰ�����ʱ�����ǰ��ĳ��Ȳ�����������������
	printf("%s\n", arr2); 
 	
 	return 0;
 } 
