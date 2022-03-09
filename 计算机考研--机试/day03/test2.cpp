#include <iostream>
#include <cstdio>
#include<vector>

using namespace std;

int main(){
  int myArray[] = {1,2,3,4,5};

  vector<int> myVector(myArray,myArray+5);//1,2,3,4,5

  int n = myVector.size();//n=5

  myVector.pop_back();//1,2,3,4

  myVector.push_back(6);//1,2,3,4,6

  myVector.insert(myVector.begin()+1,9);//1,9,2,3,4,6

  myVector.insert(myVector.begin(),3,7);//7,7,7,1,9,2,3,4,6

  myVector.insert(myVector.begin(),myArray,myArray+2);//1,2,7,7,7,1,9,2,3,4,6

  myVector.erase(myVector.begin()+6);//1,2,7,7,7,1,2,3,4,6

  myVector.erase(myVector.begin()+1,myVector.begin()+3);//1,7,7,1,2,3,4,6

  myVector.clear();//

  printf("%d ",myVector);

  return 0;
}