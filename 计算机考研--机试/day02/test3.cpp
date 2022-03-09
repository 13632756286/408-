#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int n, x, y, z; //n火鸡数、xyz原价格中间三位
  while (~scanf("%d", &n)){
    scanf("%d %d %d", &x, &y, &z);
    int tot, f = 0; //tot原价格、f标记是否存在能够整除火鸡数n的价格
    //这里选择从9枚举到1是为了第一次输出就是最高价格
    for (int a = 9; a >= 1; a--){ //a控制原价格的万位[1,9]
      for (int b = 9; b >= 0; b--){ //b控制原价格的个位[0,9]
        tot = a * 10000 + x * 1000 + y * 100 + z * 10 + b;
        if (tot % n == 0){        //如果原价格tot能够整除火鸡数n
          f = 1; //则将整除标记置1
          printf("%d %d %d\n", a, b, tot / n);
          break;
        }
      }
      if (f) break; //如果已经整除，则跳出枚举
    }
    if (!f) printf("0\n"); //如果没有可以整除的价格，则打印0
  }
  return 0;
}