#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) //数组的初始化
    {
        scanf("%d", &a[i]);
        b[i] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        if (b[j] == 1) //如果这个数字之前没有记录过
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] == a[k]) //出现相同的字母
                {
                    b[j]++;
                    b[k] = b[j];
                }
            }
        }
    }
    int cnt = b[0];
    int max = a[0];
    for (int kk = 1; kk < n; kk++)
    {
        if (b[kk] > cnt)
        {
            cnt = b[kk]; //找到最大的出现次数
            max = a[kk];
        }
    }
    printf("%d %d", max, cnt);
    return 0;
}