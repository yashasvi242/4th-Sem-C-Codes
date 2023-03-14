
#include <stdio.h>

//program to  print the freq of every char in a given string 

int main()
{
    char str[] = "abcbca"; 
    int freqArr[26] = {0}; // to strore freq 
    
    for(int i=0; i < sizeof(str)/sizeof(char); i++){
        int index = str[i] - 'a';
        freqArr[index]++;
    }
    
    // printing 
    for(int i=0; i < 26; i++){
        char ch = i + 'a';
        int freq = freqArr[i];
        
        if(freq != 0)
            printf("frequency of %c is %d\n", ch, freq);
    }
    
    
    
    return 0;
}
