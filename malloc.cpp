#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//extern void* malloc(unsigned int num_bytes); 
//void* malloc(size_t size); 
//malloc开辟内存空间,以void*形式返回内存首地址;
//malloc包含在<stdlib.h>中; 
//1.malloc()中放的是存储数据所占空间 e.g:sizeof(int)*n; 
//2.使用时要强行转换类型 e.g:(int*),指针类型; 
//3.使用完后需要释放内存空间 e.g:free(p);p=NULL;释放内存，且令p变为空指针;
char *p=NULL;
int n=10;
int main()
{
	//指针=(指针类型*)malloc(sizeof(指针类型)*数据数量); 
	p=(char*)malloc(sizeof(char)*n);
	printf("p=%d\n",p);
	strcpy(p,"hello world!");
	printf(p);
	free(p);
	p=NULL;
	return 0;
}

