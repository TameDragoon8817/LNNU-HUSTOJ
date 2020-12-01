/*
1081: 求矩阵各行元素之和
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，求一个给定的m×n矩阵各行元素之和。
输入
输入第一行给出两个正整数m和n（1≤m,n≤6）。随后m行，每行给出n个整数，其间
以空格分隔。
输出
每行输出对应矩阵行元素之和。
样例输入
3 2
6 3
1 -8
3 12
样例输出
9
-7
15
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int m, n, i, j, sum = 0;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
            if (j == n - 1)
            {
                printf("%d\n", sum);
                sum = 0;
            }
        }
    return 0;
}