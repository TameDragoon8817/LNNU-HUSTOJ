/*
1093: 统计大写辅音字母
时间限制: 1 Sec  内存限制: 128 MB
题目描述
英文辅音字母是除
A、E、I、O、U以外的字母。本题要求编写程序，统计给定字符串中大写辅音字母的个数。
输入
输入在一行中给出一个不超过80个字符、并以回车结束的字符串。
输出
输出在一行中给出字符串中大写辅音字母的个数。
样例输入
HELLO World!
样例输出
4
*/
#include <string.h>
#include <stdio.h>
#define MAXN 80
int main()
{
    int i, len, cnt1 = 0, cnt2 = 0;
    char str[MAXN];
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
            cnt1++;
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            cnt2++;
    }
    printf("%d", cnt1 - cnt2);
    return 0;
}