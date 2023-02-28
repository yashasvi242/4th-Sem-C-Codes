#include<stdio.h>

// ✔️
// Type def is used to rename a 'data type name' with any custom name you want
// eg. we converted int into 'balance' now balance means int only.

int main(){

    typedef int balacnce;

    int a = 10;
    balacnce b = 20;

    printf("a is %d, b is %d", a,b);
    
}