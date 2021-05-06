#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 5
//循环的简单示例
void main2() //运行此代码,请将此方法名改为 void main(),并修改其他文件main名称,一个项目只能有一个main入口点.
{
 //简单嵌套循环示例
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
 //While示例  计算 1 + 2 + 3 + 4 + … + 100 之和的程序，下用 while 编程实现功能：
        int d = 1;
        int sum = 0;
        while (d <= 100)
        {
            sum = sum + d;
            ++d;
        }
        printf("sum = %d\n", sum);
        return 0;


//多重嵌套循环示例
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
