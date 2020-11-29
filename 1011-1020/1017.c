#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main (void)
{
	int a,b,c,d,Sum;
	double Average;
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	Sum=a+b+c+d;
	Average=(a+b+c+d)/4.0;
	printf ("Sum = %d ; Average = %.1f",Sum,Average);
	return 0;
}