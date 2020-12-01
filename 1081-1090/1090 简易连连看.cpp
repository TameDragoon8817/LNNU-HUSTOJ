/*
1090: 简易连连看
时间限制: 1 Sec  内存限制: 128 MB
提交: 35  解决: 4
[提交][状态][讨论版]
题目描述
本题要求实现一个简易连连看游戏模拟程序。
给定一个2N×2N的方阵网格游戏盘面，每个格子中放置一些符号。这些符号一定是成对出现的，同一个符号可能不止一对。程序读入玩家给出的一对位置(x1,y1)、(x2,y2)，判断这两个位置上的符号是否匹配。如果匹配成功，则将两个符号消为“*”并输出消去后的盘面；否则输出“Uh-oh”。若匹配错误达到3次，则输出“Game
Over”并结束游戏。或者当全部符号匹配成功，则输出“Congratulations!”，然后结束游戏。
输入
输入在一行中给一个正整数N（<5）。随后2N行，每行2N个大写英文字母（其间以1个空格分隔），表示游戏盘面。盘面之后给出一个正整数K，随后K行，每行按照格式“x1
y1 x2 y2”给出一个玩家的输入。注意格子的行、列编号是从1到2N。 输出
根据玩家的每一步输入，输出相应的结果。输出盘面时注意，每行字符间以1个空格分隔，行末不得有多余空格。
样例输入
2
I T I T
Y T I A
T A T Y
I K K T
11
1 1 1 3
4 2 4 3
3 1 4 2
2 2 1 2
3 1 2 4
4 4 3 1
2 1 3 4
3 3 1 4
4 1 2 3
2 4 3 2
1 1 2 2
样例输出
* T * T
Y T I A
T A T Y
I K K T
* T * T
Y T I A
T A T Y
I * * T
Uh-oh
* * * T
Y * I A
T A T Y
I * * T
Uh-oh
* * * T
Y * I A
* A T Y
I * * *
* * * T
* * I A
* A T *
I * * *
* * * *
* * I A
* A * *
I * * *
* * * *
* * * A
* A * *
* * * *
Congratulations!
*/
#include <iostream>
using namespace std;
int main()
{
    char a[11][11];
    int N, K, right = 0, wrong = 0;
    cin >> N;
    for (int i = 1; i <= 2 * N; ++i)
        for (int j = 1; j <= 2 * N; ++j)
            cin >> a[i][j];
    cin >> K;
    for (int i = 0; i < K; ++i)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (a[x1][y1] == a[x2][y2] && a[x1][y1] != '*')
        {
            a[x1][y1] = '*';
            a[x2][y2] = '*';
            right++;
            if (right == 2 * N * N)
            {
                cout << "Congratulations!";
                exit(0);
            }
            for (int i = 1; i <= 2 * N; ++i)
            {
                cout << a[i][1];
                for (int j = 2; j <= 2 * N; ++j)
                    cout << " " << a[i][j];
                cout << endl;
            }
        }
        else
        {
            cout << "Uh-oh" << endl;
            if (++wrong == 3)
            {
                cout << "Game Over";
                exit(0);
            }
        }
    }
    return 0;
}