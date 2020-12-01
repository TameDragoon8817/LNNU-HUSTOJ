/*
1095: 输出大写英文字母
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，顺序输出给定字符串中所出现过的大写英文字母，每个字母只输出一遍；若无大写英文字母则输出“Not
Found”。 输入 输入为一个以回车结束的字符串（少于80个字符）。 输出
按照输入的顺序在一行中输出所出现过的大写英文字母，每个字母只输出一遍。若无大写英文字母则输出“Not
Found”。 样例输入 FONTNAME and FILENAME 样例输出 FONTAMEIL
*/
#include<stdio.h>,
int main()
{int count,cnt=0,k=0;
	char str[81];
	char a[26];
	int i,j=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	    count = 0;
		for(j=0;j<cnt;j++)
		{
		if(str[i]==a[j])
		{
		count=1;break;
		}
		}
		if(str[i]>='A'&&str[i]<='Z'&&count==0)
		{
			k=1;
			a[j]=str[i];
			printf("%c",a[j]);
			j++;
			cnt++;
 		}
	}
	if(k==0)printf("Not Found");	
}