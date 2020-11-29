#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float rate,year,money,interest;
	scanf("%f%f%f",&money,&year,&rate);
	interest=money*pow((1+rate),year)-money;
	printf("interest = %.2f",interest);
	return 0;
}