//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
////16.����һ�����ַ�a~z��A~Z��ɵ��ַ������ַ������� <= 10000�����������������ַ����ִ����Ĳ�ֵ�ľ���ֵ
////���� :
////��һ�������ַ����ڶ������������ַ������ :
////����������ַ����ִ����Ĳ�ֵ�ľ���ֵ�������� :
////AbddeDfacd
////A d
////������� :
////2
////(���� : �ַ������ַ�'A'������2�Σ��ַ�'d'������4�Σ�����Ϊ  2 - 4 = 2)
//
////�ж������Ƿ�Ϊa-z,A-Z
//void JudgeInput(char* a,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if ((*a >= 'a'&&*a <= 'z')||(*a >= 'A'&&*a <= 'Z'))
//		{
//			a++;
//		}
//		else
//		{
//			printf("�����ʽ���ԣ���������г���");
//			break;
//		}
//	}
//}
//
////������ִ���
//int FrequencyChar(char* m,int len,char a)
//{
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (*m == a)
//		{
//			count++;
//		}
//		m++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	JudgeInput(arr, len);
//
////	int len = sizeof(arr) / sizeof(arr[0]);
//	char a=0, b=0;
//	scanf("%c %c", &a, &b);
//
//	int i = FrequencyChar(arr, len, a);
//	int j = FrequencyChar(arr, len, b);
//
//	printf("%d\n", abs(i - j));
////	printf("%c %c", a, b);
//	return 0;
//}
