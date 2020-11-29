#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	double item=0.0, result = 0.0;
	char c;
	scanf("%d%d %c", &a, &b, &c);
	switch (b) {
	case 90:
		item = 6.95 * a * 1.0;
		break;
	case 93:
		item = 7.44 * a * 1.0;
		break;
	case 97:
		item = 7.93 * a * 1.0;
		break;
	}
	if (c == 'm') {
		result = item * 0.95;
	}
	else if (c == 'e') {
		result = item * 0.97;
	}
	printf("%.2f", result);
	return 0;
}