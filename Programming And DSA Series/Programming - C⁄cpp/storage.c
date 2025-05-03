#include<stdio.h>

void fun(){
    static int a = 1;
    a++;
    printf("%d\n",a);
}

void main(){

    // auto
    // int b;
    // printf("%d",b);

    // register
    // register int x;
    // printf("%d",x);

    //static
    // static int a =  5;
    // printf("%d",a);

    // fun();
    // fun();
    // fun();
    // printf("%d",a);
}