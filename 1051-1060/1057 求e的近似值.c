/*
1057: 求e的近似值
时间限制: 1 Sec  内存限制: 128 MB
题目描述
自然常数eee可以用级数1+1/1!+1/2!+⋯+1/n!来近似计算。本题要求对给定的非负整数nnn，求该级数的前nnn项和。

输入
输入第一行中给出非负整数nnn（≤1000\le 1000≤1000）。
输出
在一行中输出部分和的值，保留小数点后八位。
样例输入
10
样例输出
2.71828180
*/
#include <stdio.h>
double factorial(int n);
int main (void)
{
    int n;
    double result;
    scanf("%d", &n);
    result = 1 + factorial(n);
    printf("%.8f", result);
    return 0;
}
double factorial(int n)
{
    int i;
    double item, result = 0, denominator=1;
    for (i = 1; i <= n;i++){        
        denominator = denominator * i;
        item = 1 / denominator;
        result = result + item;
    }
    return result;
}
