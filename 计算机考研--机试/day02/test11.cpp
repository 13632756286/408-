#include <iostream>
#include <cstdio>
#include <algorithm>

//散列查找--自定义的方式
using namespace std;

const int MAXN = 100 + 10;
const int RANGE = 1e6;

int arr[MAXN];
bool hashTable[RANGE];

// bool BinarySearch(int n,int target){
//     int left = 0;
//     int right = n - 1;
//     while (left <= right){
//         int middle = (left + right) / 2;//中间位置
//         if(arr[middle] < target){//小于关键字，舍弃左边
//             left = middle + 1;
//         }else if(target < arr[middle]){//大于关键字，舍弃右边
//             right = middle - 1;
//         }else{
//             return true;//查找成功
//         }
//     }
//     return false;
// }

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