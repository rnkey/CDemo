#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 5
//һά����ļ򵥼��� by run 2021-04-27
//һά����¼��
//���/ƽ����/�����/��С��
//������/�ȽϷ�/ð���㷨��ο���ά����
void main1111() //���д˴���,�뽫�˷�������Ϊ void main(),���޸������ļ�main����,һ����Ŀֻ����һ��main��ڵ�.
{
	int x[N] = { 0 };
	int minValue = 0, maxValue = 0;
	float avg = 0;
	int i = 0, j = 0, total = 0;
	printf("������5��������");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}
	minValue = x[0], maxValue = x[0], total = x[0];
	for (j = 1; j < N; j++)//�˴���1��ʼ,������һ����Ĭ�ϸ����ֵ,��Сֵ.
	{
		total += x[j];
		if (x[j] > maxValue) maxValue = x[j];
		if (x[j] < minValue) minValue = x[j];
	}
	avg = (float)total / N; //����floatǿ��ת����Ϊ����ʾС��
	printf("����ǰ��������ܺ���:%d,ƽ������:%1f,���ֵ��:%d,��Сֵ��:%d,", total, avg, maxValue, minValue);
	printf("\n");
	//������,  break��continue һ��Ӧ����ѭ����,break ��������ѭ��,continue ������ǰѭ��
	//switch (���ʽ)                            //���ʽ��ֵֻ��������� case ֵ���г���һ��
	//{
	//	case ֵ 1��������� 1��break;         //break ���Ĺ��������� switch ��䣬ִ�����������
	//		case ֵ 2��������� 2��break;
	//			case ֵ 3��������� 3��
	//				case ֵ 4��������� 4��               //���û�� break ��䣬����Զ�����ִ�к��� case ���������
	//				����
	//				case ֵ n��������� n��break;
	//				default:�������n + 1;                  //default �����ǿ�ѡ��
	//}
	//////////////////
	////�ȽϷ�����
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
	//printf("�ȽϷ�������:\n");
	//for (i = 0; i < N; i++)
	//{
	//	printf("%d ", x[i]);
	//}
	int t = 0;
	for (int i = 0; i < N - 1; i++) {//n��������n-1�ֱȽ� 
		for (int j = i + 1; j < N; j++)//ÿһ�ֱȽ�ʱ�����������iΪ�±�����Ƚ� 
			if (x[j] < x[i])
			{//���iΪ�±�����Ⱥ����һ�����󣬽�����������λ��                 
				t = x[j];
				x[j] = x[i];
				x[i] = t;

			}
	}
	printf("������������:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", x[i]);
	}
}