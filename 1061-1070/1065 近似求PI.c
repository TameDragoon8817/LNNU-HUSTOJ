/*1065: 近似求PI
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，根据下式求π的近似值，直到最后一项小于给定精度eps。
输入
输入在一行中给出精度eps，可以使用以下语句来读输入：
 scanf("%le", &eps);
输出
在一行内，按照以下格式输出π的近似值（保留小数点后5位）：
 PI = 近似值
样例输入
1E-5
样例输出
PI=3.14158
*/
#include<stdio.h>
int main(void){
	double i=1;
	double eps,sum=0,re=1;
	scanf("%le", &eps);
	while(re>=eps){
		sum = sum + re;
		re = re * i/(2*i+1);
		i = i + 1;
	}
	sum = sum + re;
	printf("PI=%.5f",2*sum);
	return 0;
}