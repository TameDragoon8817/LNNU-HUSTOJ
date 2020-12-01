/*
1068: 简化的插入排序
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序。
输入
输入在第一行先给出非负整数N（<10）；第二行给出N个从小到大排好顺序的整数；第三行给出一个整数X。
输出
在一行内输出将X插入后仍然从小到大有序的整数序列，每个数字后面有一个空格。
样例输入
5
1 2 4 5 7
3
样例输出
1 2 3 4 5 7
*/
#include <stdio.h>
int main()
{
    int n, j, i, t, x;
    scanf("%d", &n);
    int a[n + 1];
    for (i = 0; i < n; i++)
    { //input
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    if (x < a[0])
    { //special min
        for (j = n - 1; j >= 0; j--)
        { //有多少个n移多少次！
            a[j + 1] = a[j];
        }
        a[0] = x;
    }
    else if (x > a[n - 1])
        a[n] = x; //special max
    else
        for (i = 0; i < n; i++)
        { //do
            if (x > a[i] && x <= a[i + 1])
            {
                for (j = n - 1; j > i; j--)
                {
                    a[j + 1] = a[j];
                }
                a[i + 1] = x;
                break;
            }
        }
    for (i = 0; i < n + 1; i++)
    { //output
        printf("%d ", a[i]);
    }
    return 0;
}