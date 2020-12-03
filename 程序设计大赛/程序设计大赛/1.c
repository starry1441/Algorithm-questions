//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
////16.输入一行由字符a~z和A~Z组成的字符串，字符串长度 <= 10000，求其中任意两个字符出现次数的差值的绝对值
////输入 :
////第一行输入字符串第二行输入两个字符。输出 :
////输出这两个字符出现次数的差值的绝对值输入样例 :
////AbddeDfacd
////A d
////输出样例 :
////2
////(解释 : 字符串中字符'A'出现了2次，字符'd'出现了4次，则结果为  2 - 4 = 2)
//
////判断输入是否为a-z,A-Z
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
//			printf("输入格式不对，请从新运行程序。");
//			break;
//		}
//	}
//}
//
////计算出现次数
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
