#include<stdio.h>

// program to check if the given 2 strings are equal or not.

int main(){

    char str1[5];
    char str2[5];

    printf("enter str1 : ");
    scanf("%s", &str1);
    printf("enter str2 : ");
    scanf("%s", &str2);

    for(int i=0; i < 5; i++){
        if(str1[i] != str2[i]){
            puts("strings not equal.");
            return 0;
        }
    }

    puts("strings are equal.");
    return 0;
}
