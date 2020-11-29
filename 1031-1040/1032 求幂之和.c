#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, sum = 0, item, i;
    scanf("%d", &n);
    for (i = 1; i <= n;i++){
        item = pow(2, i);
        sum = sum + item ;
    }
    printf("result=%d", sum);
    return 0;
}