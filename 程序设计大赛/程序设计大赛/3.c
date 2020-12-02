//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
////若有一个区间[M，N]，求区间(包括两端点M、N)内所有数中不含数字K的数的和
////输入:
////输入正整数M、N、K(M、N <= 1e8, 0 <= K <= 9)
////输入 :
////输出区间内不含数字K的数的和，结果对1000000007取模
////样例输入 :
////10 20 0
////样例输出 : 
////135
//
////判断输入数据合法性
//void JudgeRange(int m,int n,int k)
//{
//	if (m > pow(10, 8))
//	{
//		printf("输入m不合法\n");
//	}
//	if (n > pow(10, 8))
//	{
//		printf("输入n不合法\n");
//	}
//	if (m > n)
//	{
//		printf("区间不合法\n");
//	}
//	if (k<0 && k>9)
//	{
//		printf("输入k不合法\n");
//	}
//}
//
////计算数据位数
//int CalculateDigit(int i)
//{
//	for (int j = 0; j < 9; j++)
//	{
//		if (i != 0)
//		{
//			i = i / 10;
//			continue;
//		}
//		else
//		{
//			return j;
//		}
//	}
//	return 0;
//}
//
////计算区间[M,N]中没有数字k数据的和
//int NoNumk(int m, int n, int k)
//{
//	int count = 0;
//	int j = 0;
//	int i = 0;
//	int dige = 0; 
//	int a = 0;
//	for (i = m; i <= n; i++)
//	{
//		dige = CalculateDigit(i);
//		a = i;
//		for (j = 0; j < dige; j++)//111-122  2
//		{
//			if (a % 10 == k)
//			{
//				break;
//			}			
//			a = a / 10;
//		}
//		if (j == dige)
//		{
//			count += i;
//		}
//	}
//	return count;
//}
//
////最终结果：对1000000007取模
//int Result(int sum)
//{
//	int res = sum % 1000000007;
//	return res;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d %d $d", &m, &n, &k);
//	JudgeRange(m, n, k);
//	int sum = NoNumk(m, n, k);
//	int res = Result(sum);
//	printf("%d\n", res);
//	return 0;
//}
