/*
1100: 删除重复字符串
时间限制: 1 Sec  内存限制: 128 MB
题目描述
本题要求编写程序，将给定字符串去掉重复的字符后，按照字符ASCII码顺序从小到大排序后输出。
输入
输入是一个以回车结束的非空字符串（少于80个字符）。
输出
输出重新排序后的结果字符串。
样例输入
ad2f3adjeainzzzv
样例输出
23adefijnvz
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    cout << str;
    return 0;
}