#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ַ�����ʾ�� by run 2021-04-27
void main() //���д˴���,�뽫�˷�������Ϊ void main(),���޸������ļ�main����,һ����Ŀֻ����һ��main��ڵ�.
{
//��ȡ�����ַ�
	char a[] = "hello C!", b[20];
	memset(b, '\0', sizeof(b));
	strncpy(b, a, 5);
	printf("ǰ5λ�ַ��ǣ� %s\n", b);
//�滻�ַ���
	char a1[] = "hello world!", b1[20];
	char*  x = strstr(a1, "world");
	printf("�滻����ַ��ǣ� %s\n", x);
}