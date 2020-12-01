#include<stdio.h>
int main() {
  int n,a,b,c,k=1,t,max,min,count=0;
  scanf("%d",&n);
  while(k!=495) {
    a=n%10;/*输出每位上的数*/
    b=n/100;
    c=(n%100)/10;
    if(a>b) {t=a;a=b,b=t;}/*比较大小排序*/
    if(a>c) {t=a;a=c;c=t;}
    if(b>c) {t=b;b=c;c=t;}
    min=a*100+b*10+c;
    max=c*100+b*10+a;
    k=max-min;
    count++;
    printf("%d:%d-%d=%d\n",count,max,min,k);
    n=k;
}
  return 0;
}