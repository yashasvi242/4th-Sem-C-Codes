#include<stdio.h>

// print even numbers from 1 to n

void printEven(int n, int count){

    // base case 
    if(count > n) return;
    printf("%d ", count);
    printEven(n, count + 2);
}

int main(){

    int n = 100;
    int count = 0;
    printEven(n,count);
}