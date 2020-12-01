#include <stdio.h>
int main()
{
    int an, ancnt, bn, tmp, cnt = 0, first = 1;
    // C static数组默认全初始化为0, flag[i]为0表示res[i]这位数不输出
    static int res[40], flag[40];   // 用flag数组代替删除操作
    scanf("%d", &an);
    ancnt = an;
    for (int i = 0; i < an; i++)    // 读第一个数组, 跳过重复的
    {
        scanf("%d", &tmp);
        int j = 0;
        for (j = 0; j < cnt; j++)
            if (flag[j] == 1 && res[j] == tmp)
                break;
        if (j == cnt)
        {
            res[cnt] = tmp;
            flag[cnt] = 1;
            ++cnt;
        }
        else
            --ancnt;                // 记录第一个数组存入res多少个数！！
    }
    scanf("%d", &bn);
    for (int i = 0; i < bn; i++)    // 读第二个数组, res中出现过的话，对应位flag归0，继续下一个数
    {
        scanf("%d", &tmp);
        int j = 0;
        for (j = 0; j < cnt; j++)
            if (res[j] == tmp)    // 这里不能判断flag!!!!!!因为只要出现过就一定不需要了
                break;
        if (j == cnt)             // res中没出现过
        {
            res[cnt] = tmp;
            flag[cnt] = 1;
            ++cnt;
        }
        else if (j < ancnt)       // 在第一个数组中出现过
            flag[j] = 0;
        // 在第二个数组中重复了就直接跳过
    }
    for (int i = 0; i < 40; i++)
        if(flag[i] == 1 && first == 1)
        {
          printf("%d", res[i]);
          first = 0;
        }
        else if(flag[i] == 1)
          printf(" %d", res[i]);
    return 0;
}