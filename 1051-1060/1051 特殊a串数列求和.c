/*
1051: 特殊a串数列求和
时间限制: 1 Sec  内存限制: 128 MB
题目描述
给定两个均不超过9的正整数a和n，要求编写程序求a+aa+aaa++⋯+aa⋯a（n个a）之和。
输入
输入在一行中给出不超过9的正整数a和n。
输出
在一行中按照“s = 对应的和”的格式输出。
样例输入
2 3
样例输出
s = 246
*/
#include <stdio.h>
int main (void)
{
    int i,a,n,sum=0,t=0;
    scanf("%d %d", &a, &n);
    for(i=1;i<=n;i++)
    {
        t=t*10+a;
        sum=sum+t;
    }
    printf("s = %d\n", sum);
    return 0;
}
