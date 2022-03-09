// ========================= 多组输入--未知数组 =============================
// 题目描述：求整数a,b的和，输入由一系列整数对a,b组成，每行一对整数，并用空格隔开，输出对应的a+b的结果，每一对输出占一行

#include <iostream>
#include <cstdio>

using namespace std;

// c语言的写法
// int main() {
//   int a,b;
//   while (scanf("%d %d",&a,&b) != EOF){//只要不到文件结尾，不断进行输出，到了结尾再跳出循环
//     printf("%d\n",a+b);
//   }
//   return 0;
// }

// c++的写法
int main() {
  int a,b;
  while (cin >> a >> b){
    cout << a+b << endl;
  }
  return 0;
}
