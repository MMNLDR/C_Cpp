#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

//goto��䳣������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ��
 int main()
 {
 	//shutdown -s -t 60 60���ڹػ�
	//system() - ִ��ϵͳ����ĺ���
	char input[20] = {0}; 
 	system("shutdown -s -t 60");
again:
 	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룻������ ��ȡ���ػ�\n������");
 	scanf("%s", &input);
 	if(strcmp(input, "������")==0)//ר�����ڱȽ������ַ���-strcmp()  ����0˵����� 
 	{
	 	system("shutdown -a");//ȡ���ػ� 
	} 
	else
	{
		goto again;
	}  
 	return 0;
 }
