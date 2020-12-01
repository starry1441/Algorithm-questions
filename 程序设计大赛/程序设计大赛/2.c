#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//若有非零整数A、B、C，将其组成两个等式(A@B)#C = 24、A@(B#C) = 24，其中@和#为运算符号'+'、'-'、"*、'/'、'%'之一，
//同一符号可选择一次或多次，如果这两个等式至少有一个成立，则输出YES，否则输出NO。
//输入:
//第一行输入正整数N，表示有N组数据。(N<1000)
//其后N行每行输入非零整数A、B、C(-1e5 <= A、B、C <= 1e5)
//输出 :
//如果两个等式至少有一个成立，则输出YES，否则输出NO，每组数据的输出占一行。
//样例输入 :
//3
//4 1 6
//3 4 5
//6 3 12
//样例输出 :
//YES
//NO
//YES
//(注意，在该题中整数 / 整数，取结果的整数部分，例如1 / 4 = 0)

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
	//动态开辟行内存
	arr = (int**)malloc(1000*sizeof(int*));
	for (int i = 0; i < 3; i++)
	{
		//动态开辟列内存
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
