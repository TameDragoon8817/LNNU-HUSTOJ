/*
1055: 高空坠球
时间限制: 1 Sec  内存限制: 128 MB
题目描述
皮球从某给定高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。问皮球在第nnn次落地时，在空中一共经过多少距离？第nnn次反弹的高度.
输入
输入在一行中给出两个非负整数，分别是皮球的初始高度和nnn，均在长整型范围内。
输出
 在一行中顺序输出皮球第nnn次落地时在空中经过的距离、以及第nnn次反弹的高度，其间以一个空格分隔，保留一位小数。题目保证计算结果不超过双精度范围。
样例输入
33 5
样例输出
94.9 1.0
*/
#include <stdio.h>
#include <math.h>
int main (void)
{
    int height, n, i;
    double length=0.0, level,item=0.0;
    scanf ("%d%d", &height, &n);
    if (n>0){
    item = height * 1.0;
    length = length + item;
    for (i = 1; i <= n;i++){
        if (i==1) {
        }
        else {
            length = length + item * 2.0;
        }
        item = item / 2;
    }
    level = item;
    printf("%.1f %.1f", length, level);}
    else {
        printf("0.0 0.0");
    }
    return 0;
}
