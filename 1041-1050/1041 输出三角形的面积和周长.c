#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main(void)
{
	double area, perimeter, s, a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a)
		printf("These sides do not correspond to a valid triangle");
	else {
		s = (a + b + c) / 2;
		area = sqrt(s * (s-a) * (s-b) * (s-c));
		perimeter = a + b + c;
		printf("area=%.2f,perimeter=%.0f", area, perimeter);
	}
	return 0;
}