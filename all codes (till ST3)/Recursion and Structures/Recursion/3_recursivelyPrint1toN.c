// print numbers from 1 to N (recursively)

#include<stdio.h>

void printNo(int n, int count){

    // base case 
    if(count > 10) return;
    printf("%d ", count);
    printNo(n,count + 1);
}

int main(){

    // print numbers from 1 to 10
    int n=10;
    printNo(n,1);

    return 0;
}

