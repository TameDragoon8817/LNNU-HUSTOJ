/*
1088: 找鞍点
时间限制: 1 Sec  内存限制: 128 MB
题目描述
一个矩阵元素的“鞍点”是指该位置上的元素值在该行上最大、在该列上最小。
本题要求编写程序，求一个给定的n阶方阵的鞍点。
输入
输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔。
输出
输出在一行中按照“行下标
列下标”（下标从0开始）的格式输出鞍点的位置。如果鞍点不存在，则输出“NONE”。题目保证给出的矩阵至多存在一个鞍点。
样例输入
4
1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9
样例输出
2 1
*/
#include <stdio.h>
#define MAXN 6
int main(void)
{
    int n, matrix[MAXN][MAXN], i, j, k, i_max, j_min;
    scanf("%d", &n); //输入阶数
    for (i = 0; i < n; i++)
    { //输入数据
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        i_max = matrix[i][0];
        for (j = 0; j < n; j++)
        { //找到该行最大数
            if (matrix[i][j] > i_max)
            {
                i_max = matrix[i][j];
            }
        }
        for (j = 0; j < n; j++)
        {
            j_min = matrix[0][j];
            for (k = 0; k < n; k++)
            { //找到该列最小数
                if (matrix[k][j] < j_min)
                {
                    j_min = matrix[k][j];
                }
            }
            if (matrix[i][j] == i_max)
            {
                if (matrix[i][j] == j_min)
                {
                    printf("%d %d\n", i, j);

                    return 0;
                }
            }
        }
    }
    printf("NONE\n");
    return 0;
}