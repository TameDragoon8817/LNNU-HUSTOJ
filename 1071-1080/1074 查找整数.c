/*
1074: 查找整数
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求从输入的N个整数中查找给定的X。如果找到，输出X的位置（从0开始数）；如果没有找到，输出“Not Found”。
输入
输入在第一行中给出两个正整数N（≤20）和X，第二行给出N个整数。数字均不超过长整型，其间以空格分隔。
输出
在一行中输出X的位置，或者“Not Found”。
样例输入
5 7
3 5 7 1 9
样例输出
2
 */
#include <stdio.h>
int main()
{
    int n, x, i = 0;
    int arr[20];
    scanf("%d %d", &n, &x);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Not Found");
    }
    return 0;
}