#include <iostream>
#include <cstdio>
#include <cstring>

// 线性排序
using namespace std;

// 给你n个整数，请按从大到小的顺序输出其中前m大的数
// 输入：第一行有两个整数n,m(0<n,m<1000000),第二行包含n个各不相同，且都处于区间[-500000,500000]的整数

// 10的6次方+10
const int MAXN = 1e6 + 10;
const int RANGE = 5e5;

int arr[MAXN];
int number[MAXN];

int main(){
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF){
        memset(number,0,sizeof(number));//每次输入前先把之前的数组先清空
        for (int i = 0; i < n; ++i){
            scanf("%d",&arr[i]);
            number[arr[i] + RANGE]++;
        }
        int index = 0;
        for (int i = 0; i < MAXN; ++i){
            while (number[i]--){
                arr[index++] = i - RANGE;
            }
        }
        for (int i = n-1; i >= n-m; --i){
            if(i == n-m){
                printf("%d\n",arr[i]);
            }else{
                printf("%d",arr[i]);
            }
        }
    }
    
    return 0;
}