//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
////����һ������[M��N]��������(�������˵�M��N)���������в�������K�����ĺ�
////����:
////����������M��N��K(M��N <= 1e8, 0 <= K <= 9)
////���� :
////��������ڲ�������K�����ĺͣ������1000000007ȡģ
////�������� :
////10 20 0
////������� : 
////135
//
////�ж��������ݺϷ���
//void JudgeRange(int m,int n,int k)
//{
//	if (m > pow(10, 8))
//	{
//		printf("����m���Ϸ�\n");
//	}
//	if (n > pow(10, 8))
//	{
//		printf("����n���Ϸ�\n");
//	}
//	if (m > n)
//	{
//		printf("���䲻�Ϸ�\n");
//	}
//	if (k<0 && k>9)
//	{
//		printf("����k���Ϸ�\n");
//	}
//}
//
////��������λ��
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
////��������[M,N]��û������k���ݵĺ�
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
////���ս������1000000007ȡģ
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
