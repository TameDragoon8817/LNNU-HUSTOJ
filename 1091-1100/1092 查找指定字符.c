/*
1092: 查找指定字符
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，从给定字符串中查找某指定的字符。
输入
输入的第一行是一个待查找的字符。第二行是一个以回车结束的非空字符串（不超过80个字符）。
输出
如果找到，在一行内按照格式“index = 下标”输出该字符在字符串中所对应的最大下标（下标从0开始）；否则输出"Not Found"。
样例输入
m
programming
样例输出
index = 7
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char c, str[81];
    int i, index = -1;
    scanf("%c\n", &c);
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (c == str[i])
        {
            index = i;
        }
    }
    if (index != -1)
    {
        printf("index = %d", index);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}