#include<stdio.h>
int main(void) 
{
	/*投机取巧，不标准的解法奥，可以通过
	printf("152 = 2 + 5*10 + 1*100");*/
	/*以下是正常解法但是未提交试验，肉眼结果没有问题*/
	int num=152,hundred,ten,one;
	hundred = num / 100;
	ten = (num - hundred*100) / 10;
	one = num - hundred*100 - ten*10;
	printf("%d = %d + %d*10 + %d*100",num,one,ten,hundred);
	return 0;
}
