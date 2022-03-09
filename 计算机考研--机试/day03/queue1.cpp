#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main(){
  queue<int> myQueue;

  for (int i = 0; i < 10; ++i){
    myQueue.push(i);//入队
  }

  int sum = 0;
  while (!myQueue.empty()){//判空
    sum += myQueue.front();//访问队首
    myQueue.pop();//出队
  }
  
  printf("%d\n",sum);
  return 0;
}