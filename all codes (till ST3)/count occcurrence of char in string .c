#include<stdio.h>

// given a string and a character, find the number of times the character is occuring inside the string 
/*
     input :- 
          ch = 'e'
          string = "abcehjie"
          
     output : e occurs 2 times
  */

int main(){
    
    char ch;
    char str[20]; // s occurs 2 times
    printf("enter a character : ");
    scanf("%c",&ch);
    printf("enter a string : ");
    scanf("%s",&str);
    
    int charCount = 0 ;
    for(int i=0; i < sizeof(str)/sizeof(char); i++){
        if(str[i] == ch)
            charCount++;
    }
    
    
    printf("%c occurs %d times.", ch,charCount);
    
  
    
    
    
}
