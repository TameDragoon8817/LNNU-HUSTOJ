#include <stdio.h>
int main()
{
	int n;
	double y;
	scanf("%d", &n);
	if (n <= 1600)
	{
		y = 0;
		printf("%.2lf", y);
	}
	else if (n > 1600 && n <= 2500)
	{
		y = 0.05 * (n - 1600);
		printf("%.2lf", y);
	}
	else if (n > 2500 && n <= 3500)
	{
		y = 0.1 * (n - 1600);
		printf("%.2lf", y);
	}
	else if (n > 3500 && n <= 4500)
	{
		y = 0.15 * (n - 1600);
		printf("%.2lf", y);
	}
	else if (n > 4500)
	{
		y = 0.2 * (n - 1600);
		printf("%.2lf", y);
	}
}