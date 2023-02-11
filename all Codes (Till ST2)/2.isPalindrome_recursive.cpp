#include<stdio.h>

// recursive function to check if a string is palindrome or not 

bool isPalindrome(char string[], int i, int j){
    
    // base case 
    if(i >= j) return true;
    if(string[i] != string[j]) return false;
    return isPalindrome(string, ++i, --j);
    
}

int main(){
    
    //char string[] = "malayalam";   // TC - 1 
    char string[] = "heeelloo";    // TC - 2
    
    int size = (sizeof(string)/sizeof(char))-1;
    int i = 0,j=size-1;
    bool ans = isPalindrome(string, i, j);
    
    if(ans) printf("yes, %s is a palindrome", string);
    else printf("no %s is not a, palindrome", string);
    
    return 0;
    
}