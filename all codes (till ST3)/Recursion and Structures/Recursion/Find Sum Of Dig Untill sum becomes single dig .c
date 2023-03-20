#include<stdio.h>

// find sum of n untill n becomes single dig 

/* explanation :-

  input : n = 9999 
  
  9+9+9+9 => 36
  3+6 => 9 (single dig)
  
  output : 9
  
*/

int findSumOfDig(int n){
    if(n < 10) return n;
    
    return n % 10 + findSumOfDig(n/10);
}

int main(){
    
   // int n = 9999; // output : 9
    int n = 9876; // output : 3
   // int n = 10573; // output : 7
    
    while(n >= 10){
        n = findSumOfDig(n);
    }
    
    
    printf("output : %d",n);
}
