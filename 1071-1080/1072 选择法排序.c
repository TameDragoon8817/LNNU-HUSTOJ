/*
1072: 选择法排序
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求将给定的n个整数从大到小排序后输出。
输入
输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。
输出
在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。
样例输入
4
5 1 7 6
样例输出
7 6 5 1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void)
{
    int n, i, temp, k, index;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (k = 0; k < n - 1;k++)
    {
        index = k;
        for (i = k + 1; i < n;i++)
        if (a[i]>a[index])
            index = i;
        temp = a[index];
        a[index] = a[k];
        a[k] = temp;
    }
    for (i = 0; i < n-1;i++)
        printf("%d ", a[i]);
    printf("%d", a[i]);
    return 0;
}