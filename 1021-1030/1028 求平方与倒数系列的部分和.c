#include <stdio.h>
#include <math.h>
double item(int a, int b);
int main(void)
{
    int m, n;
    double S = 0;
    scanf("%d%d", &m, &n);
    S = S + item(m, n);
    printf("sum = %lf", S);
    return 0;
}
double item(int a, int b)
{
    int i;
    double result = 0, item;
    for (i = a; i <= b; i++)
    {
        item = pow(i, 2) + pow(i, -1);
        result = result + item;
    }
    return result;
}