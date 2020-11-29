#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main()
{
	int flag = 0;
	double x1, x2, t, a, b, c, real, imag;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0) //先判断输出情况4;
	{
		printf("Zero Equation");
		return 0;
	}
	else if (a == 0 && b == 0 && c != 0)
	{ //先输出情况判断5；
		printf("Not An Equation");
		return 0;
	}
	t = pow(b, 2) - 4 * a * c * 1.0;
	if (a != 0 && t >= 0)
	{
		x1 = (-b + sqrt(t)) / (2 * a * 1.0); //分母必须要加小括号；
		x2 = (-b - sqrt(t)) / (2 * a * 1.0);
	}
	if (t >= 0 && (a == 0 || a != 0))
	{
		if (a != 0 && t == 0)
			x1 = x2 = -b * 1.0 / (2 * a);
		if (a == 0 && b != 0 && t > 0)
			x1 = x2 = -c * 1.0 / b; //只有一个实根，1.a= =0&&t>0例a= =0,b= =2,c= =4; 2.a!=0&&t= =0例，a= =1,b= =2,c= =1;
	}
	if (t >= 0 && (a == 0 || a != 0)) //包含了方程有两个不相等的实数根或两个相等的实数根；输出情况1和3放在一起；
	{
		if (x1 > x2)
			printf("%.2lf\n%.2lf", x1, x2);
		else if (x1 < x2)
			printf("%.2lf\n%.2lf", x2, x1);
		else
			printf("%.2lf", x1); //x1= =x2;
	}

	else if (t < 0 && a != 0) //有两个不相等的复数根；
	{
		t = 4 * a * c - b * b;
		real = (-b * 1.0) / (2 * a * 1.0);		//实部；
		imag = (sqrt(t) * 1.0) / (2 * a * 1.0); //虚部；
		if (b == 0)
			real = 0; //若方程有纯虚根，则real==0;（注：纯虚根是实部为零）；
		printf("%.2lf+%.2lfi\n", real, imag);
		printf("%.2lf%.2lfi", real, -imag);
	}
}
