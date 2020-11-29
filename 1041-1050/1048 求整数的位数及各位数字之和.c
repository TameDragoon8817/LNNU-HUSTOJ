#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main (void)
{
	int N, count=0, sum=0,item;
	scanf("%d", &N);
	while (N!=0) {
		item = N % 10;
		count++;
		sum = sum + item;
		N = N / 10;
	}
	printf("%d %d", count, sum);
	return 0;
}