#include <stdio.h>
#include <math.h>
double sqr(int M);
int main(void)
{
    int N;
    double S;
    scanf("%d", &N);
    S = sqr(N);
    printf("sum = %.2f", S);
    return 0;
}
double sqr(int M)
{
    int i;
    double result, item;
    for (i = 1; i <= M; i++)
    {
        item = sqrt(i);
        result = result + item;
    }
    return result;
}