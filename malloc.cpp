#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//extern void* malloc(unsigned int num_bytes); 
//void* malloc(size_t size); 
//malloc�����ڴ�ռ�,��void*��ʽ�����ڴ��׵�ַ;
//malloc������<stdlib.h>��; 
//1.malloc()�зŵ��Ǵ洢������ռ�ռ� e.g:sizeof(int)*n; 
//2.ʹ��ʱҪǿ��ת������ e.g:(int*),ָ������; 
//3.ʹ�������Ҫ�ͷ��ڴ�ռ� e.g:free(p);p=NULL;�ͷ��ڴ棬����p��Ϊ��ָ��;
char *p=NULL;
int n=10;
int main()
{
	//ָ��=(ָ������*)malloc(sizeof(ָ������)*��������); 
	p=(char*)malloc(sizeof(char)*n);
	printf("p=%d\n",p);
	strcpy(p,"hello world!");
	printf(p);
	free(p);
	p=NULL;
	return 0;
}

