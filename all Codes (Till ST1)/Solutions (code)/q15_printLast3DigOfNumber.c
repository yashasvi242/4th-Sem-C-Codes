#include <stdio.h>

// write program to take input as a number and print its last 3 digits 

int main(void) {
  
  int number;
  printf("enter a number : ");
  scanf("%d",&number);

  int lastDig, secondLastDig, thirdLastDig;
  int n = number;

  lastDig = n%10;
  n /= 10;
  secondLastDig = n%10;
  n /= 10;
  thirdLastDig = n%10;
  n /= 10;

  printf("last 3 digits are : %d, %d, %d", thirdLastDig,secondLastDig,lastDig);
  
  
  
  return 0;
}