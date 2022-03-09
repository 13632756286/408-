#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int all = 0;
  int n = 100;
  
  scanf("%d",&n);
    
  for(int i=0;i<=n;i++){
    if(i%10!=7 || i%7!=0){
      all+=i*i;
    }
  }
  printf("%d\n",all);
  return 0;
}