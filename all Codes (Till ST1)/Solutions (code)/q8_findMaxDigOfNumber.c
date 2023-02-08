#include <stdio.h>

// take input as int from user, and tell which digit of this number is the maximum eg. for n = 9876 ans = 9


int main(void) {

  int number;
  printf("enter a number : ");
  scanf("%d",&number);

  int n = number;  // cloning the numer

  int digit;
  int maxDigit = -99999;
  while(n > 0){
    // fetching digits from the back of number 
    digit = n%10;
    if(digit > maxDigit) maxDigit = digit;
    // removing last digit of number 
    n /= 10;
   }

  printf("largest digit of %d is %d \n", number,maxDigit );
  return 0;
}