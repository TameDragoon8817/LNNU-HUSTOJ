/*
1060: 水仙花数
时间限制: 1 Sec  内存限制: 128 MB
题目描述
水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153
= 13 + 53+ 33。 本题要求编写程序,计算所有N位水仙花数。
输入
输入在一行中给出一个正整数N（3≤N≤7）。
输出
按递增顺序输出所有N位水仙花数，每个数字占一行。
样例输入
3
样例输出
153
370
371
407
*/
#include<stdio.h>
int p(int a,int b);
int main()
{
	int N;
	scanf("%d",&N);
	
	int i,j,count,trans,sum=0,flag=0;		 // flag为0的时候不输出回车，目的是为了满足题目格式 
	
	for(i= p(10,N-1);i<p(10,N);i++){    //定义了i的取值范围，一定是在 10^N-1到10^N之间取值；
		trans=i;  
		sum=0;
		j= 1;
		while(j<= N){				//取余然后算sum 
			sum+=p(trans%10, N);		//取出最后一位然后N次方 
			trans/=10;						//丢掉最后一位 .
			j++;
			if(sum==i&&trans==0){
			printf("%d\n",i);
			flag=1;			
				break;
			}
		}
	}
	
	return 0; 
}
int p(int a,int b)
{
 int t=a;
 for(int i=1;i<b;i++)
  a=a*t;
  
 return a;
}
