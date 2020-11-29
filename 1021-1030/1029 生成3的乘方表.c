#include <math.h>
#include <stdio.h>
int main(void)
{
    int n, i, item;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        item = pow(3, i);
        printf("pow(3,%d) = %d\n", i, item);
    }
    return 0;
}