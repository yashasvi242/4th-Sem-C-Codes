#include <stdio.h>

// write program to check if the given number prime or not.

void isPrime(int number){

  // edge case 
  if(number == 0 || number == 1){
    printf("not prime.\n");
    return;
  } 
  for(int i = 2; i < number; i++){
    if(number % i == 0){
      printf("not prime.\n");
      return ;
    } 
  }
  printf("yes, prime.\n");
  
}

int main(void) {

  int n;
  printf("enter a number : ");
  scanf("%d",&n);

  isPrime(n);
  
  return 0;
}