#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//输入一个正整数N(1 <= N<10000), 接下来输入这N个正整数序列，再输入一个正整数
//K(1 <= K <= 100), 其后跟K行操作，每行操作包括两个正整数i和j(1 <= i <= j <= N)，
//表示将区间[i中的元素删除，操作结束后输出最终的正整数序列。
//输入 :
//第一行输入N
//第二行输入N个正整数
//第三行输入K
//其后K行每行输入两个正整数
//输出 :
//输出操作结束后的最终序列，相邻两数之间以一个空格分隔。
//样例输入 :
//10
//1 2 3 4 5 6 7 8 9 10
//2
//1 3
//8 10
//样例输出 :
//4 5 6 7

void DeleteNum(int arr[], int i, int j)
{
	int a = j - i+1;
	for (int b=0; b < a; b++)
	{
		arr[i + b - 1] = '\0';
	}
}

void Result(int arr[], int arr2[],int n)
{
	for (int i = 0,j = 0; i < n; i++)
	{
		if (arr[i])
		{
			arr2[j] = arr[i];
			j++;
		}
	}
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	
	int* arr = (int*)malloc(sizeof(int)* n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
		printf("%d ", arr[i]);
	}
	printf("\n");
	int k = 0;
	scanf("%d", &k);
	int i = 0;
	int j = 0;
	int count = 0;
	for (int m = 0; m < k; m++)
	{
		scanf("%d %d", &i, &j);
		count += (j - i + 1);
		DeleteNum(arr, i, j);
	}
	int* arr2 = (int*)malloc(sizeof(int)* (n - count));
	Result(arr, arr2, n);
	for (int i = 0; i < n-count; i++)
	{
		printf("%d ", arr2[i]);
	}
	free(arr);
	free(arr2);
	arr = NULL;
	arr2 = NULL;
	return 0;
}