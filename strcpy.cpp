#include<stdio.h>
#include<string.h>
//strcpy=string and copy;
//char* strcpy(char* destination,const char* source);
//char* destination--Ŀ���ַ������׵�ַ;
//const char* source--Դ��ַ;
//strcpy����Ŀ���ַ������׵�ַ;
//1.Ŀ��ռ����ɱ� 
//2.Ŀ��ռ��㹻���Է���� 
//3.��'\0'�������һ�copy'\0'��Ŀ���ַ����� 
char array1[10];
static char array2[10];
char array3[]="hello world!";
int main()
{
	char *p;
	p=array3;
	printf("%s\n",p);
	printf("%s\n",strcpy(array1,"hello world!"));
	printf("%s\n",strcpy(array2,array3));
	return 0;
}
