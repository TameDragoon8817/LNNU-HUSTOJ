/*
1075: 输出数组元素
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，对顺序读入的n个整数，顺次计算后项减前项之差，并按每行三个元素的格式输出结果。
输入
输入的第一行给出正整数n（1<n≤10）。随后一行给出n个整数，其间以空格分隔。
输出
顺次计算后项减前项之差，并按每行三个元素的格式输出结果。数字间空一格，行末不得有多余空格。
样例输入
10
5 1 7 14 6 36 4 28 50 100
样例输出
-4 6 7
-8 30 -32
24 22 50
*/
#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int p = 0; p < n; p++)
    {
        scanf("%d", &arr[p]);
    }
    if (n == 1)
        printf("%d", arr[0]);
    for (int i = 0; i < n - 1;)
    {
        int j = 3;
        while (j)
        {
            if (i + 1 == n)
                break;
            if (i % 3 == 0)
                printf("%d", arr[i + 1] - arr[i]);
            else
                printf(" %d", arr[i + 1] - arr[i]);
            j--;
            i++;
        }
        if (i == n - 1)
            break;
        printf("\n");
    }
    return 0;
}