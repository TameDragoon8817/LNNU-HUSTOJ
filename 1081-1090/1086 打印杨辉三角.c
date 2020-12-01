/*
1086: 打印杨辉三角
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求按照规定格式打印前N行杨辉三角。
输入
输入在一行中给出N（1≤N≤10）。
输出
以正三角形的格式输出前N行杨辉三角。每个数字占固定4位。
样例输入
6
样例输出
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
   1   5  10  10   5   1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int N, i, j, blank, k;
    scanf("%d", &N);
    static int a[10][10];
    for (i = 0; i < N; i++)
    {
        a[i][i] = 1;
        a[i][0] = 1;
    }
    for (i = 2; i < N; i++)
        for (j = 1; j < N; j++)
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                blank =2*N-2*i-2;
                for (k = 1; k <= blank; k++)
                    printf(" ");
            }
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}