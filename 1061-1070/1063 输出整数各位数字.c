/*1063: 输出整数各位数字
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。
输入
输入在一行中给出一个长整型范围内的非负整数。
输出
从高位开始逐位输出该整数的各位数字，每个数字后面有一个空格。
样例输入
123456
样例输出
1 2 3 4 5 6
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main()
{
	int n, count = 0;
	scanf("%d", &n);
	int t = n;
	if (n == 0)
	{
		printf("%d ", 0);
	}
	else
	{
		while (n != 0)
		{
			n = n / 10;
			count++;
		}
		while (count > 0)
		{
			count--;
			printf("%d ", t / (int)pow(10, count));
			t = t % (int)pow(10, count);
		}
	}
	return 0;
}