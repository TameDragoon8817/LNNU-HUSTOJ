/*
1066: 简单计算器
时间限制: 1 Sec  内存限制: 128 MB
题目描述
模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。
输入
输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。
输出
在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“error”。
样例输入
1+2*10-10/2=
样例输出
10
*/
#include <stdio.h>
int main()
{
    int i, sum, isnan = 0;
    char op = '0';

    scanf("%d", &sum);

    while (op != '=')
    {
        scanf("%c", &op);
        if (op == '=')
            break;
        scanf("%d", &i);
        if (op == '+')
            sum = sum + i;
        else if (op == '-')
            sum = sum - i;
        else if (op == '*')
            sum = sum * i;
        else if (op == '/')
        {
            if (i != 0)
                sum = sum / i;
            else
                isnan = 1;
        }
        else
            isnan = 1;
    }

    if (isnan == 1)
        printf("error");
    else
        printf("%d\n", sum);

    return 0;
}