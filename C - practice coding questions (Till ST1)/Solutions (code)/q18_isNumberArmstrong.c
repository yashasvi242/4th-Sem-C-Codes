#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// program to check whether a number is armstrong or not
// eg. 153 is armstrong, 1^3 + 5^3 + 3^3 = 153

void isArmstrong(int n){
  
  int num = n;
  int sum = 0;
  
  while(n > 0){
    int digit = n%10;
    sum += pow(digit,3);
    n /= 10;
    
  }

  if(sum == num) printf("yes, number is armstrong\n");
  else printf("not armstrong\n");
} 
  
int main() {
  
  int number;
  printf("enter a number : ");
  scanf("%d",&number);

  isArmstrong(number);
  
  
  return 0;
}