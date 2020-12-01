/*
1069: 求最大值及其下标
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，找出给定的n个数中的最大值及其对应的最小下标（下标从0开始）。
输入
输入在第一行中给出一个正整数n（1<n≤10）。第二行输入n个整数，用空格分开。
输出
在一行中输出最大值及最大值的最小下标，中间用一个空格分开。
样例输入
6
2 8 10 1 9 10
样例输出
10 2
*/
#include <stdio.h>
int main()
{
    int n, i, max;
    int count = 0;
    int num[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (i = 1; i < n; i++)
    {
        while (num[i] > max)
        {
            max = num[i];
            count = i;
        }
    }
    printf("%d %d\n", max, count);
    return 0;
}