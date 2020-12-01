/*
1099: 字符串字母大小转换
时间限制: 1 Sec  内存限制: 128 MB
提交: 220  解决: 126
[提交][状态][讨论版]
题目描述
本题要求编写程序，对一个以“#”号结束的字符串，将其小写字母全部转换成大写字母，把大写字母全部转换成小写字母，其他字符不变输出。
输入
输入一个以“#”号结束的字符串（不超过30个字符）。
输出
在一行中输出大小写转换后的结果字符串。
样例输入
Hello World! 123#
样例输出
hELLO wORLD! 123
*/
#include <stdio.h>
#include <string.h>
#define N 35
//思路：定义两个字符数组分别存储输入的字符串和经过大小写转换后的字符串，大小写
//      转换的思路是，大写字母的ASCII值 + 32 == 小写字母的ASCII值
int main(void)
{
    int i, j, len = 0;
    char ch;
    char str1[N]; //存储输入的字符串
    char str2[N]; //存储处理后的字符串

    ch = getchar();             //输入字符串
    for (i = 0; ch != '#'; i++) //输入字符串
    {
        str1[i] = ch;
        len++;
        ch = getchar();
    }
    for (i = 0; i < len; i++) //处理大小写转换，保存在str[2]中
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str2[i] = str1[i] + 32;
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            str2[i] = str1[i] - 32;
        }
        else
        {
            str2[i] = str1[i];
        }
    }
    for (i = 0; i < len; i++) //输出处理后的字符串str[2]
    {
        printf("%c", str2[i]);
    }
    printf("\n");

    return 0;
}