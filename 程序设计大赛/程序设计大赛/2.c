//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
////���з�������A��B��C���������������ʽ(A@B)#C = 24��A@(B#C) = 24������@��#Ϊ�������'+'��'-'��"*��'/'��'%'֮һ��
////ͬһ���ſ�ѡ��һ�λ��Σ������������ʽ������һ�������������YES���������NO��
////����:
////��һ������������N����ʾ��N�����ݡ�(N<1000)
////���N��ÿ�������������A��B��C(-1e5 <= A��B��C <= 1e5)
////��� :
////���������ʽ������һ�������������YES���������NO��ÿ�����ݵ����ռһ�С�
////�������� :
////3
////4 1 6
////3 4 5
////6 3 12
////������� :
////YES
////NO
////YES
////(ע�⣬�ڸ��������� / ������ȡ������������֣�����1 / 4 = 0)
//
////�ж��������ݺϷ���
//int JudgeNum(int n,int** arr)
//{
//	//��������N<1000
//	if (n < 1 || n >= 1000)
//	{
//		printf("����n���Ϸ�\n");
//	}
//	//-1e5 <= A��B��C <= 1e5
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (arr[i][j]<-100000 || arr[i][j]>100000)
//			{
//				printf("�������ݲ��Ϸ�,���������г���\n");
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
//
////��ѡ�������
//int Operation(int a, int b,int input)
//{
//	switch (input)
//	{
//	case 1:
//		return a + b;
//		break;
//	case 2:
//		return a - b;
//		break;
//	case 3:
//		return a*b;
//		break;
//	case 4:
//		return a / b;
//		break;
//	case 5:
//		return a%b;
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
//
////��������
//void ConposeOperation(int **arr,int n)
//{
//	int num1 = 0;	//(A@B)#C 
//	int num2 = 0;	//A@(B#C)
//	int input1 = 0;	//@
//	int input2 = 0;	//#
//	//����ÿ������
//	for (int i = 0; i < n; i++)
//	{
//		//����ÿ�����ݵ������@
//		for (input1 = 1; input1 < 6; input1++)
//		{
//			int a = Operation(arr[i][0], arr[i][1], input1);
//			int b = Operation(arr[i][1], arr[i][2], input1);
//			//����ÿ�������#
//			for (input2 = 1; input2 < 6; input2++)
//			{
//				num1 = Operation(a, arr[i][2], input2);
//				num2 = Operation(b, arr[i][0], input2);
//				//�ж�ÿ���������Ƿ�Ϊ24
//				if (num1 == 24 || num2 == 24)
//				{
//					printf("Yes\n");
//					break;
//				}
//			}
//			if (num1 == 24 || num2 == 24)
//			{
//				break;
//			}
//		}
//		//��ȫ�������������������24
//		if (input1 == 6)
//		{
//			printf("No\n");
//		}
//	}
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//
//	int **arr = NULL;
//	//��̬�������ڴ�
//	arr = (int**)malloc(1000*sizeof(int*));
//	for (int i = 0; i < 3; i++)
//	{
//		//��̬�������ڴ�
//		arr[i] = (int*)malloc(sizeof(int)*3);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &arr[i][0], &arr[i][1],&arr[i][2]);
//	}
//
//	JudgeNum(n, arr);
//	ConposeOperation(arr, n);
//
//	//�ͷſռ��ָ���ÿ�
//	free(arr);
//	arr = NULL;
//	return 0;
//}
