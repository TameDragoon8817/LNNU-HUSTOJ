/*
1098: 统计字符出现次数
时间限制: 1 Sec  内存限制: 128 MB
提交: 145  解决: 96
[提交][状态][讨论版]
题目描述
本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。
输入
输入第一行给出一个以回车结束的字符串（少于80个字符）；第二行输入一个字符。
输出
在一行中输出给定字符在给定字符串中出现的次数。
样例输入
programming is More fun!
m
样例输出
2
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    char ch;
    char a[81];
    int i, len = 0, count = 0;
    ch = getchar();
    for (i = 0; ch != '\n'; i++)
    {
        a[i] = ch;
        len++;
        ch = getchar();
    }
    scanf("%s", &c);
    for (i = 0; i < len; i++)
    {
        if (c == a[i])
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}