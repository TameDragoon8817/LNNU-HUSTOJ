/*
1082: 矩阵运算
时间限制: 1 Sec  内存限制: 128 MB
提交: 377  解决: 197
[提交][状态][讨论版]
题目描述
给定一个n×n的方阵，本题要求计算该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。副对角线为从矩阵的右上角至左下角的连线。
输入
输入第一行给出正整数n（1<n≤10）；随后n行，每行给出n个整数，其间以空格分隔。
输出
在一行中给出该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。
样例输入
4
2 3 4 1
5 6 1 1
7 1 8 1
1 1 1 1
样例输出
35
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n, i, j, sum = 0, k;
    scanf("%d", &n);
    int a[n][n];
    k = n - 1;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if ((i + j != k) && i != k && j != k)
            {
                sum = sum + a[i][j];
            }
    printf("%d", sum);
    return 0;
}