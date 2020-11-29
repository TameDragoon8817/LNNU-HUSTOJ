#include <stdio.h>
int main (void)
{
	int N,i;
	double S=0.0,item;
	scanf ("%d",&N);
	for (i=1;i<=N;i++){
		item=1.0/i;
		S=S+item;
	}
	printf ("sum = %.6lf",S);
	return 0;
}