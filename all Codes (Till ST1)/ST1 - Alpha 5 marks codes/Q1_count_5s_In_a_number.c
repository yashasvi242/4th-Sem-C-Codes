#include <stdio.h>

// Question - Given a integer 'n' you need to count number of 5s present in the integer

int main(void) {

  // take input 
  int number;
  printf("enter a number : ");
  scanf("%d",&number);

  // lets now count number of 5s in that number
  int n = number;
  int count = 0;
  while(n > 0){
    
    int digit = n%10;// fetching a digit from last
    if(digit == 5) count++;
    n /= 10; // removing a digit from last 
    
  }

  printf("number of 5s are : %d", count);

  return 0;
}