// ========================= 多组输入--指定数组 =============================
// 题目描述：求整数a,b的和，输入:第一行输入整数n，然后紧随着n行输入，每行由整数对a,b组成，并用空格隔开。输出对应的a+b的结果，每一对输出占一行

#include <iostream>
#include <cstdio>

using namespace std;

// c语言的写法
// int main() {
//   int n;
//   scanf("%d",&n);
//   while (n--){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d\n",a+b);
//   }
//   return 0;
// }

// c++的写法
int main() {
  int n;
  cin >> n;
  while (n--){
    int a,b;
    cin >> a >> b;
    cout << a+b << endl;
  }
  return 0;
}