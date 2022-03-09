#include <iostream>
#include <cstdio>
#include <string>

//字符串遍历--特殊乘法
using namespace std;

//输入两个数字，例：123 45 => 123*45=1*4+1*5+2*4+2*5+3*4+3*5
int main(){
    string str1,str2;
    while (cin >> str1 >> str2){
        int answer = 0;
        for (int i = 0; i < str1.size(); ++i){
            for (int j = 0; j < str2.size(); ++j){
                answer += (str1[i] - '0') * (str2[j] - '0');
            }
        }
        cout << answer << endl;
    }

    return 0;
}