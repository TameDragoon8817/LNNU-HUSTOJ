/*
1054: 兔子繁衍问题
时间限制: 1 Sec  内存限制: 128 MB
题目描述
一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到NNN对？

输入
输入在一行中给出一个不超过10000的正整数NNN。
输出
在一行中输出兔子总数达到NNN最少需要的月数。
样例输入
30
样例输出
9
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
int N;  
    scanf("%d",&N);  
    if(N==1) printf("1");  
    else{  
        int i,x1=1,x2=1,x=0;     
        for(i=2;x2<N;i++){  
            x=x1+x2;  
            x1=x2;  
            x2=x;  
    }  
    printf("%d",i);   
    }  
    return 0;  
}
