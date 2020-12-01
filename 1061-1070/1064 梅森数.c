/*
1064: 梅森数
时间限制: 1 Sec  内存限制: 128 MB
题目描述
形如2n -1的素数(n也是素数)称为梅森数（Mersenne Number）。例如22−1=3,23
-1=7都是梅森数。1722年，双目失明的瑞士数学大师欧拉证明了231−1=2147483647是一个素数，堪称当时世界上“已知最大素数”的一个记录。
本题要求编写程序，对任一正整数n（n<20），输出所有不超过2n -1的梅森数。
输入
输入在一行中给出正整数n（n<20）。
输出
按从小到大的顺序输出所有不超过2n
-1的梅森数，每行一个。如果完全没有，则输出“None”。 样例输入
6
样例输出
3
7
31
*/
#include<stdio.h>
#include<math.h>
int main(){
	int num,n,i,j,f=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		num=pow(2,i)-1;
		for(j=2;j<=sqrt(num);j++)
			if(num%j==0) break;
		if(j>sqrt(num)){
			printf("%d\n",num);
			f++;
		}	
	}
	if(f==0) printf("None");
	return 0;
} 