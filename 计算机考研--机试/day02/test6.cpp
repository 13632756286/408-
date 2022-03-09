#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char str[81];
    while (scanf("%s", &str) != EOF)
    {
        char maxtrix[80][80];
        for (int i = 0; i < 80; i++)
        {
            for (int j = 0; j < 80; j++)
            {
                maxtrix[i][j] = ' '; //初始化一个80x80的矩阵用空格填充
            }
        }

        int n = 0, k = 0, n1, n2;
        while (str[n] != '\0')
        { //统计字符串长度
            n++;
        }
        for (int i = 0; i < (n + 2) / 3; i++)
        { //先填左边竖列
            maxtrix[i][0] = str[k++];
            n1 = i;
        }
        for (int j = 1; j < (n + 2) / 3 + (n + 2) % 3; j++)
        { //填下方横线
            maxtrix[n1][j] = str[k++];
            n2 = j;
        }
        for (int t = n1 - 1; t >= 0; t--)
        { //填右边竖线
            maxtrix[t][n2] = str[k++];
        }

        for (int i = 0; i < n1 + 1; i++)
        { //输出
            for (int j = 0; j < n2 + 1; j++)
            {
                printf("%c", maxtrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}