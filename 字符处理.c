#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//字符处理示例 by run 2021-04-27
void main() //运行此代码,请将此方法名改为 void main(),并修改其他文件main名称,一个项目只能有一个main入口点.
{
//截取部分字符
	char a[] = "hello C!", b[20];
	memset(b, '\0', sizeof(b));
	strncpy(b, a, 5);
	printf("前5位字符是： %s\n", b);
//替换字符串
	char a1[] = "hello world!", b1[20];
	char*  x = strstr(a1, "world");
	printf("替换后的字符是： %s\n", x);
}