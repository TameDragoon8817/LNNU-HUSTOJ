#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char ch;
    int i, letter = 0, blank = 0, digit = 0, other = 0;
    for (i = 1; i <= 10; i++)
    {
        ch = getchar();
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letter++;
        }
        else if (ch == ' ' || ch == '\n')
        {
            blank++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}
