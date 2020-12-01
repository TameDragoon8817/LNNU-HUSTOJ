/*
1076: 数字加密
时间限制: 1 Sec  内存限制: 128 MB
题目描述
输入一个四位数，将其加密后输出。方法是将该数每一位上的数字加9，然后除以10取余，做为该位上的新数字，最后将千位和十位上的数字互换，百位和个位上的数字互换，组成加密后的新四位数。例如输入1257，经过加9取余后得到新数字0146，再经过两次换位后得到4601。
输入
输入在一行中给出一个四位的整数x，即要求被加密的数。
输出
在一行中按照格式“The encrypted number is V”输出加密后得到的新数V。
样例输入
1257
样例输出
The encrypted number is 4601
*/
#include <stdio.h>
int main()
{
    int i = 3, x;
    int a[4];
    int temp;
    scanf("%d", &x);
    while (i != -1)
    {
        a[i] = x % 10;
        x = x / 10;
        i--;
    }
    for (i = 0; i < 4; i++)
    {
        a[i] = a[i] + 9;
    }
    for (i = 0; i < 4; i++)
    {
        a[i] = a[i] % 10;
    }
    for (i = 0; i < 2; i++)
    {
        temp = a[i];
        a[i] = a[i + 2];
        a[i + 2] = temp;
    }
    printf("The encrypted number is ");
    for (i = 0; i < 4; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}