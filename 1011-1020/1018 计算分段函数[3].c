#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main (void)
{
	float x,result;
	scanf ("%f",&x);
	if (x==10){
		result=1/x;
	}
	else{
		result=x;
	}
	printf ("f(%.1f) = %.1f",x,result);
	return 0;
}