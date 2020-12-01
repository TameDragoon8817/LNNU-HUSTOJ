/*
1052: 求给定精度的简单交错序列部分和
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ...
直到最后一项的绝对值不大于给定精度eps.
输入
输入在一行中给出一个正实数eps。
输出
在一行中按照“sum =
S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。
样例输入
4E-2
样例输出
sum = 0.854457
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double fact(double n);
int main(void)
{
    double S,eps;
    scanf("%lf", &eps);
    S = fact(eps);
    printf("sum = %lf", S);
    return 0;
}
double fact(double n)
{
    int c=1,flag=1;
    double result = 0;
    while (1.0/c>n)
    {
        result = result + flag * 1.0 / c;
        flag = -flag;
        c=c+3;
    }
    result = flag * 1.0 / c + result;
    return result;
}