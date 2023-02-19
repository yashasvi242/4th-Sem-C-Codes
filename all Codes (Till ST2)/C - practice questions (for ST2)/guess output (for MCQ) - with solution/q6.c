// Q-6 would this code compiler ?
#include<stdio.h>
#include<stdbool.h>
int main(){
    int a = 10, *j;
    void *k;
    j = k = &a;
    j++;
    k++;
    printf("%u%u\n",j,k);
    return 0;
}

// no error 