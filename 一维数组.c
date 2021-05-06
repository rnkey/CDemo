#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 5
//一维数组的简单计算 by run 2021-04-27
//一维数组录入
//求和/平均数/最大数/最小数
//交换法/比较法/冒泡算法请参考二维数组
void main1111() //运行此代码,请将此方法名改为 void main(),并修改其他文件main名称,一个项目只能有一个main入口点.
{
	int x[N] = { 0 };
	int minValue = 0, maxValue = 0;
	float avg = 0;
	int i = 0, j = 0, total = 0;
	printf("请输入5个整数：");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}
	minValue = x[0], maxValue = x[0], total = x[0];
	for (j = 1; j < N; j++)//此处从1开始,即将第一个数默认给最大值,最小值.
	{
		total += x[j];
		if (x[j] > maxValue) maxValue = x[j];
		if (x[j] < minValue) minValue = x[j];
	}
	avg = (float)total / N; //加入float强制转换是为了显示小数
	printf("您当前输入的数总和是:%d,平均数是:%1f,最大值是:%d,最小值是:%d,", total, avg, maxValue, minValue);
	printf("\n");
	//其余略,  break、continue 一般应用于循环中,break 跳出整个循环,continue 跳出当前循环
	//switch (表达式)                            //表达式的值只能在下面的 case 值表中出现一次
	//{
	//	case 值 1：语句序列 1；break;         //break 语句的功能是跳出 switch 语句，执行其后面的语句
	//		case 值 2：语句序列 2；break;
	//			case 值 3：语句序列 3；
	//				case 值 4：语句序列 4；               //如果没有 break 语句，则会自动继续执行后续 case 的语句序列
	//				……
	//				case 值 n：语句序列 n；break;
	//				default:语句序列n + 1;                  //default 部分是可选项
	//}
	//////////////////
	////比较法排序
	//int temp = 0;
	//for (int i = 0; i < N; i++)
	//{
	//	for (int j = 1; j < N - i; j++)
	//	{
	//		if (x[i] > x[i + j])
	//		{
	//			temp = x[i + j];
	//			x[i + j] = x[i];
	//			x[i] = temp;
	//		}
	//	}
	//}
	//printf("比较法排序结果:\n");
	//for (i = 0; i < N; i++)
	//{
	//	printf("%d ", x[i]);
	//}
	int t = 0;
	for (int i = 0; i < N - 1; i++) {//n个数进行n-1轮比较 
		for (int j = i + 1; j < N; j++)//每一轮比较时，后面的数与i为下标的数比较 
			if (x[j] < x[i])
			{//如果i为下标的数比后面的一个数大，将两个数交换位置                 
				t = x[j];
				x[j] = x[i];
				x[i] = t;

			}
	}
	printf("交换法排序结果:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", x[i]);
	}
}