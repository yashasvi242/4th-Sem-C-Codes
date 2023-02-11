#include<stdio.h>

int main(void) {
     
    //*input 
    char string[] = "malayalam";   // TC - 1 
    //char string[] = "heeelloo";    // TC - 2
    
    //*main code
    int size = (sizeof(string)/sizeof(char))-1;
    int i = 0,j=size-1;
    
    while(i < j){
    
        if(string[i++] != string[j--]){
            printf("no, %s is not a palindrome",string);
            return 0;
        }
    }
    
    printf("yes, %s is a palindrome",string);
    return 0;
}