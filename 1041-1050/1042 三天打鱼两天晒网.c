#include <stdio.h>
int main(void)
{
	int day, item;
	scanf("%d", &day);
	if (day <= 5)
		item = day;
	else
	item = day % 5;
	if (item <= 3&&item>=1) {
		printf("fishing in day %d", day);
	}
	else {
		printf("drying in day %d", day);
	}
	return 0;
}