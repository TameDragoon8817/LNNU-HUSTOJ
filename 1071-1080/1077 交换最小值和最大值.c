/*
1077: 交换最小值和最大值
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。
注意：题目保证最大和最小值都是唯一的。
输入
输入在第一行中给出一个正整数N（≤10），第二行给出N个整数，数字间以空格分隔。
输出
在一行中顺序输出交换后的序列，每个整数后跟一个空格。
样例输入
5
8 2 5 1 4
样例输出
1 2 5 4 8
*/
#include <stdio.h>
int main()
{
    int n, a[10], i, min, max, min1 = 0, max1 = 0, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        getchar();
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max1 = i;
            max = a[i];
        }
        if (min > a[i])
        {
            min1 = i;
            min = a[i];
        }
    }
    t = a[0];
    a[0] = a[min1];
    a[min1] = t;
    if (max1 == 0)
        max1 = min1;
    t = a[n - 1];
    a[n - 1] = a[max1];
    a[max1] = t;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}