/*
1091: 字符串逆序
时间限制: 1 Sec  内存限制: 128 MB
题目描述
输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。
输入
 输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。
输出
 在一行中输出逆序后的字符串。 
样例输入
Hello World!
样例输出
!dlroW olleH
*/
#include <stdio.h>
#include <math.h>
int main()
{
    char str[81];
    gets(str);
    int len = strlen(str);
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}