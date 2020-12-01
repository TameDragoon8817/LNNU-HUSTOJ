/*
1067: 统计一行文本的单词个数
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。
输入
输入给出一行字符。
输出
在一行中输出单词个数。
样例输入
Let's go to room 209.
样例输出
5
*/
#include <stdio.h>
int main()
{
    int count = 0, i = 0;
    char str[1000];
    gets(str);            //输入字符
    while (str[i] == ' ') //跳过开头的空格
        i++;
    while (str[i] != '\0') //循环到\0时结束
    {
        if (str[i] != ' ')
        {
            count++;
            while (str[i] != ' ') //跳过一个单词的其他字符
            {
                if (str[i] == '\0') //如果循环到\0，跳出循环
                    break;
                i++;
            }
        }
        else
        {
            while (str[i] == ' ')
                i++;
        }
    }
    printf("%d\n", count);
    return 0;
}