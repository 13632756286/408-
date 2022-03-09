#include <iostream>
#include <cstdio>
#include<vector>

using namespace std;

void print(vector<int> myVector, int n){
  printf("vector%d: ",n);
  for (int i = 0; i < myVector.size(); ++i){
    printf("%d",myVector[i]);
  }
  printf("\n");
}

int main(){
  int myArray[] = {1,2,3,4,5};

  vector<int> myVector1;

  vector<int> myVector2(myArray,myArray+5);//1,2,3,4,5

  vector<int> myVector3(5,2);//2,2,2,2,2

  vector<int> myVector4(myVector2);//1,2,3,4,5

  vector<int> myVector5(myVector4.begin(),myVector4.begin()+3);//1,2,3


  print(myVector1,1);
  print(myVector2,2);
  print(myVector3,3);
  print(myVector4,4);
  print(myVector5,5);

  return 0;
}