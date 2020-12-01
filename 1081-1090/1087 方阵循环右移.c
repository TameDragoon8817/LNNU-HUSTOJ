#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    m %= n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][(n - m + j) % n]);
        }
        printf("\n");
    }
    return 0;
}