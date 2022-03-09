#include <iostream>
#include <cstdio>
#include <algorithm>
#include <unordered_map>

//散列查找--系统自带的方式
using namespace std;

const int MAXN = 100 + 10;
const int RANGE = 1e6;

int arr[MAXN];
unordered_map<int,bool> hashTable;

int main(){
    int n,m;
    while (scanf("%d",&n) != EOF){
        for (int i = 0; i < n; ++i){
            scanf("%d",&arr[i]);
            hashTable[arr[i]] = true;
        }
        sort(arr,arr+n);//先排序再查找
        scanf("%d",&m);
        while(m--){
            int target;
            scanf("%d",&target);
            if(hashTable[target]){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}