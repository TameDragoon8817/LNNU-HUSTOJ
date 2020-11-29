#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, h3, m3;
    scanf("%2d%2d %2d%2d", &h1, &m1, &h2, &m2);
    h3 = (h2 * 60 + m2 - h1 * 60 - m1) / 60;
    m3 = (h2 * 60 + m2 - h1 * 60 - m1) % 60;
    printf("%02d:%02d", h3, m3);
    return 0;
}