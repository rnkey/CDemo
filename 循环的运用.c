#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 5
//ѭ���ļ�ʾ��
void main2() //���д˴���,�뽫�˷�������Ϊ void main(),���޸������ļ�main����,һ����Ŀֻ����һ��main��ڵ�.
{
 //��Ƕ��ѭ��ʾ��
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        printf("==========\n");
        for (j = 1; j <= 3; j++)
        {
            printf("**********\n");
        }
        printf("==========\n\n");
    }
 //Whileʾ��  ���� 1 + 2 + 3 + 4 + �� + 100 ֮�͵ĳ������� while ���ʵ�ֹ��ܣ�
        int d = 1;
        int sum = 0;
        while (d <= 100)
        {
            sum = sum + d;
            ++d;
        }
        printf("sum = %d\n", sum);
        return 0;


//����Ƕ��ѭ��ʾ��
    //int i, j, k;
    //for (i = 1; i <= 5; i++)
    //{
    //    for (k = 1; k <= 5 - i; k++)
    //    {
    //        printf(" ");
    //    }

    //    for (j = 1; j <= 2 * i - 1; j++)
    //    {
    //        printf("*");
    //    }

    //    printf("\n");
    //}
}
