#include <stdio.h>

 typedef struct Stu
 {
 	char name[20];
 	short age;
 	char tele[12];
 	char sex[5];
 };
 
 void Printl1(Stu tmp)
 {
	printf("name��%s\n", tmp.name);
	printf("age��%d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex��%s\n", tmp.sex);
 }
 
void Printl2(Stu* ps)
{
	printf("name��%s\n", ps->name);
	printf("age��%d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex��%s\n", ps->sex);
}
 
 int main()
 {
 	Stu s = {"����", 40, "1598886688","��"};
 	//��ӡ�ṹ������
	//�� Printl1 �� Printl2 �ĸ��ã� 
	//Printl2 ���ţ����ٿռ��ʱ���˷� 
	/*ԭ�� ��������ʱ����������Ҫѹջ�ģ��������һ���ṹ�����ʱ��
	�ṹ����󣬽ṹ��ѹջ��ϵͳ�����������Իᵼ�����ܵ��½�*/ 
	//���� �ṹ�崫��ʱ��Ҫ���ṹ��ĵ�ַ 
	Printl1(s);
	Printl2(&s);
 	return 0;
 }
