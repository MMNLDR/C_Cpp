#include <stdio.h>

//�ṹ��Ա�����Ϳ����Ǳ��������飬ָ�룬�����������ṹ�� 

//struct - �ṹ��ؼ���  
//stu - �ṹ���ǩ  
//struct stu - �ṹ������ 

/*��1 
struct stu 
{
	//��Ա���� 
	//����ṹ������ 
	//struct�ǽṹ��ؼ���
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//��������ȫ�ֵĽṹ�����
*/

//��2 
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;//struct stu������Ϊstu 

	
int main()
{
	//struct stu sa;//����һ���ֲ��Ľṹ����� ��1 
	stu sb = {"����", 20, "123456789", "��"};
	//��2  ��ʼ�� �ڶ��������ͬʱ�����ֵ 
	
	return 0;
} 
