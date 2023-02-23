#include<stdio.h>
#include<string.h>

// NULL character & length of character string.

int main(){
    
    char str[] = "abcdefghij";
    
    puts(str);
    int size = sizeof(str)/sizeof(char);
    printf("length of string : %d\n", size);
    
    // although their are 10 characters in string, but output is 11 coz here last element is '\0'
    char ch = str[10];
    printf("%c",ch); // this will print empty line coz at 10th index '\0' is present
    
    // null check 
    if(str[10] == '\0') printf("null char found");
}

/* Output :- 

    abcdefghij
    length of string : 11
    null char found
    
*/
