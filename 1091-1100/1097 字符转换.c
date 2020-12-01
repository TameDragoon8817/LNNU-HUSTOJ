/*
1097: 字符转换
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求提取一个字符串中的所有数字字符（'0'……'9'），将其转换为一个整数输出。
输入
输入在一行中给出一个不超过80个字符且以回车结束的字符串。
输出
在一行中输出转换后的整数。题目保证输出不超过长整型范围。
样例输入
free82jeep5
样例输出
825
*/
#include <stdio.h>
#include <math.h>
int main()
{
    static char a[20];
    static int b[20];
    int i, m = 0, x = 0, j;
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            b[m] = a[i] - 48;
            m++;
        }
    }
    for (i = 0, j = m - 1; i < m; i++, j--)
    {
        x += b[i] * pow(10, j);
    }

    printf("%d", x);
}