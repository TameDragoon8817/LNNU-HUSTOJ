#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void)
{
    int n, result;
    scanf("%d",&n);
    if (n<0)
    {
        result = -1;
    }
    else if (n==0)
    {
        result = 0;
    }
    else
    {
        result = 1;
    }
    printf("sign(%d) = %d", n, result);
    return 0;
}
