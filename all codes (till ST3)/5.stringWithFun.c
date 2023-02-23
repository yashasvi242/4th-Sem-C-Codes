#include<stdio.h>
int main(){
    puts("----------------------------------------");

    // there are 2 ways to input string 

    // without space (if input is "hello brother", it store str = "hellobrother" )
    char str1[19];
    printf("enter str1 :");
    scanf("%s", &str1);
    puts(str1);

    // including space (if input is "hello brother", it store str = "hello brother" )
    char str2[19];
    printf("enter str2 :");
    gets(str2);
    puts(str2); // print a string 

    // note : every string terminates with a null character (\0)

    puts("----------------------------------------");

}