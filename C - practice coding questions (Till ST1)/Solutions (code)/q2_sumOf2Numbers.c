#include <stdio.h>

// program to take 2 numbers as input from the user, and then return the sum at the end

int sum(int num1, int num2){
  int sum = num1 + num2;
  return sum;
}

int main(void) {

  int num1, num2;

  printf("enter 2 numbers(space separated) : ");
  scanf("%d %d",&num1, &num2);
  
  printf("result sum : %d\n" ,sum(num1, num2));
  return 0;
  
}