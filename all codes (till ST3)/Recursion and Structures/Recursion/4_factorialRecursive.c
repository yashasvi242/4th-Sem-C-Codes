// factorial 
#include<stdio.h>

// a function to find the factorial of number 'n' recursively

void factorial(int n, int count, int *ans){

    // base case 
    if(count > n) return;
    (*ans) *= count;
    factorial(n, count + 1, ans);


}

int main(){

    int n=5; // fact = 120
    int fact=1;
    factorial(n, 1, &fact);
    printf("%d ",fact);
}