#include <stdio.h>
#include <math.h>
double jiecheng(int M);
int main(void)
{
    int N, result;
    scanf("%d", &N);
    result = jiecheng(N);
    printf("%d", result);
    return 0;
}
double jiecheng(int M)
{
    int item = 1, result = 0, i;
    for (i = 1; i <= M; i++)
    {
        item = item * i;
        result = result + item;
    }
    return result;
}