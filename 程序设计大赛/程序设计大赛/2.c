#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//���з�������A��B��C���������������ʽ(A@B)#C = 24��A@(B#C) = 24������@��#Ϊ�������'+'��'-'��"*��'/'��'%'֮һ��
//ͬһ���ſ�ѡ��һ�λ��Σ������������ʽ������һ�������������YES���������NO��
//����:
//��һ������������N����ʾ��N�����ݡ�(N<1000)
//���N��ÿ�������������A��B��C(-1e5 <= A��B��C <= 1e5)
//��� :
//���������ʽ������һ�������������YES���������NO��ÿ�����ݵ����ռһ�С�
//�������� :
//3
//4 1 6
//3 4 5
//6 3 12
//������� :
//YES
//NO
//YES
//(ע�⣬�ڸ��������� / ������ȡ������������֣�����1 / 4 = 0)

int Operation(int a, int b,int input)
{
	switch (input)
	{
	case 1:
		return a + b;
		break;
	case 2:
		return a - b;
		break;
	case 3:
		return a*b;
		break;
	case 4:
		return a / b;
		break;
	case 5:
		return a%b;
		break;
	default:
		break;
	}
	return 0;
}

int main()
{
	int n=0;
	scanf("%d", &n);
	int **arr = NULL;
	//��̬�������ڴ�
	arr = (int**)malloc(1000*sizeof(int*));
	for (int i = 0; i < 3; i++)
	{
		//��̬�������ڴ�
		arr[i] = (char*)malloc(sizeof(int)*3);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &arr[i][0], &arr[i][1],&arr[i][2]);
	}
	int num1 = 0;
	int num2 = 0;
	int input1 = 0;
	for (int i = 0; i < n; i++)
	{
		for (input1 = 1; input1 < 6; input1++)
		{
			int a = Operation(arr[i][0], arr[i][1], input1);
			int b = Operation(arr[i][1], arr[i][2], input1);
			for (int input2 = 1; input2 < 6; input2++)
			{
				num1 = Operation(a, arr[i][2], input2);
				num2 = Operation(b, arr[i][0], input2);

				if (num1 == 24 || num2 == 24)
				{
					printf("Yes\n");
					break;
				}
			}	
			if (num1 == 24 || num2 == 24)
			{
				break;
			}
		}
		if (input1 == 6)
		{
			printf("No\n");
		}
	}
	free(arr);
	arr = NULL;
	return 0;
}
