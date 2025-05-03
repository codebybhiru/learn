#include<stdio.h>

// int sum(int n){
//     if(n==0){
//         return n;
//     }

//     return n+ sum(n-1);
// }

void print(int n){
    if(n<1){
        return ;
    }

    printf("%d\n",n);
    print(n-1);
}


void main(){
    // recursion example
    // int x = sum(10);
    // printf("%d",x);
    print(5);
}    