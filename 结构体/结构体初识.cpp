#include <stdio.h>

//������һ���ṹ������struct sut 
struct sut
{
	char name[20];
	int age;
	char id[20];	
};

int main()
{
	int a = 10;
	//ʹ��suruct sut���ʹ�����һ��ѧ������s1���������ʼ�� 
	struct sut s1 = {"����", 16, "202150270142"}; 
	struct sut* ps = &s1;   
	
/*	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id); 
	//�ṹ��ָ��->��Ա�� 
*/ 

/*	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//�ṹ�����.��Ա�� 
*/	
	return 0;
}
