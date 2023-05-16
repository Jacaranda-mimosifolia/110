#include<stdio.h>
#include<string.h>
//strcpy=string and copy;
//char* strcpy(char* destination,const char* source);
//char* destination--目标字符串的首地址;
//const char* source--源地址;
//strcpy返回目标字符串的首地址;
//1.目标空间必须可变 
//2.目标空间足够大，以防溢出 
//3.以'\0'结束，且会copy'\0'到目标字符串里 
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
