#include <stdio.h>
#include <math.h>
double fact(int n);
int main (void)
{
    int m, n, result;
    scanf("%d%d", &m, &n);
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result=%d", result);
    return 0;
}
double fact(int n)
{
    int i;
    double result = 1;
    for (i = 1; i <= n;i++)
    {
        result = result * i;
    }
        return result;
}