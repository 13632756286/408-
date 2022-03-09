// ========================= 多组输入--特定跳出 =============================
// 题目描述：求整数a,b的和，输入由一系列整数对a,b组成，每行一对整数，并用空格隔开，当输入用例为0,0时终止输入，并且不处理此用例。输出对应的a+b的结果，每一对输出占一行

#include <iostream>
#include <cstdio>

using namespace std;

// c语言的写法
// int main() {
//   int a,b;
//   while (scanf("%d %d",&a,&b) != EOF){
//     if(a==0 && b==0){
//       break;
//     }
//     printf("%d\n",a+b);
//   }
//   return 0;
// }

// c++的写法
int main() {
  int a,b;
  while (cin >> a >> b){
    if(a==0 && b==0){
      break;
    }
    cout << a+b << endl;
  }
  return 0;
}
