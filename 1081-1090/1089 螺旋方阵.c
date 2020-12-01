/*
1089: 螺旋方阵
时间限制: 1 Sec  内存限制: 128 MB
题目描述
所谓“螺旋方阵”，是指对任意给定的N，将1到N×N的数字从左上角第1个格子开始，按顺时针螺旋方向顺序填入N×N的方阵里。本题要求构造这样的螺旋方阵。
输入
输入在一行中给出一个正整数N（<10）。
输出
输出N×N的螺旋方阵。每行N个数字，每个数字占3位。
样例输入
5
样例输出
 1  2  3  4  5
 16 17 18 19  6
 15 24 25 20  7
 14 23 22 21  8
 13 12 11 10  9
*/
#include <stdio.h>
int main()
{
    static int a[10][10], flag[10][10];
    int x = 0, y = 0, t = 1, m = 1, n;
    int i, j;
    scanf("%d", &n);
dd:
    while (m % 4 == 1)
    {
        while (y < n && y >= 0 && flag[x][y] == 0)
        {
            a[x][y] = t;
            flag[x][y] = 1;
            y++;
            t++;
        }
        y--;
        x++;
        m++;
    }
    while (m % 4 == 2)
    {
        while (x < n && x >= 0 && flag[x][y] == 0)
        {
            a[x][y] = t;
            flag[x][y] = 1;
            x++;
            t++;
        }
        x--;
        y--;
        m++;
    }
    while (m % 4 == 3)
    {
        while (y < n && y >= 0 && flag[x][y] == 0)
        {
            a[x][y] = t;
            flag[x][y] = 1;
            y--;
            t++;
        }
        y++;
        x--;
        m++;
    }
    while (m % 4 == 0)
    {
        while (x < n && x >= 0 && flag[x][y] == 0)
        {
            a[x][y] = t;
            flag[x][y] = 1;
            x--;
            t++;
        }
        x++;
        y++;
        m++;
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (flag[i][j] == 0)
                goto dd;
    i = 0;
    for (j = 0; j < n; j++)
        printf(" %3d", a[i][j]);
    for (i = 1; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf(" %3d", a[i][j]);
    }
    return 0;
}