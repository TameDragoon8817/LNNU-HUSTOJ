/*
1101: 输出学生成绩
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，根据输入学生成绩，统计并输出学生的平均成绩，最高成绩和最低成绩。建议使用动态内存分配来实现。
输入
输入第一行首先给出一个正整数N，表示学生的个数。接下来一行给出N个学生成绩，数字间用空格分隔。
输出
average = 平均成绩
max = 最高成绩
min = 最低成绩
样例输入
3
85 90 95
样例输出
average = 90.00
max = 95.00
min = 85.00
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    int *p;
    float sMax, sMin, sSum = 0;
    float sAvg;
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
        if (i == 0)
        {
            sMax = *(p + i);
            sMin = *(p + i);
        }
        else
        {
            if (*(p + i) > sMax)
                sMax = *(p + i);
            if (*(p + i) < sMin)
                sMin = *(p + i);
        }
        sSum += *(p + i);
    }
    sAvg = sSum / n;
    printf("average = %.2f\n", sAvg);
    printf("max = %.2f\n", sMax);
    printf("min = %.2f\n", sMin);
    free(p);
    return 0;
}