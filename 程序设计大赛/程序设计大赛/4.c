#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//����һ��������N(1 <= N<10000), ������������N�����������У�������һ��������
//K(1 <= K <= 100), ����K�в�����ÿ�в�����������������i��j(1 <= i <= j <= N)��
//��ʾ������[i�е�Ԫ��ɾ��������������������յ����������С�
//���� :
//��һ������N
//�ڶ�������N��������
//����������K
//���K��ÿ����������������
//��� :
//���������������������У���������֮����һ���ո�ָ���
//�������� :
//10
//1 2 3 4 5 6 7 8 9 10
//2
//1 3
//8 10
//������� :
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