/*
1094: 字符串替换
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，将给定字符串中的大写英文字母按以下对应规则替换：
原字母 对应字母
A           Z
B           Y
C           X
D          W
…         …
X          C
Y          B
Z          A
输入
输入在一行中给出一个不超过80个字符、并以回车结束的字符串。
输出
输出在一行中给出替换完成后的字符串。
样例输入
Only the 11 CAPItaL LeTtERS are replaced.
样例输出
Lnly the 11 XZKRtaO OeGtVIH are replaced.
*/
#include <stdio.h>
int main()
{
    char str[81];
    gets(str);
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 155 - str[i];
        }
    }
    puts(str);
}