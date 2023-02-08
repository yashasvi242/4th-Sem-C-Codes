#include <stdio.h>

// given input from 0 to 6, print sunday if 0, monday if 1, and so on

int main(){

  int number;
  printf("enter a number : ");
  scanf("%d", &number);

  
  switch(number){

    case 0 : 
      printf("SUNDAY");
      break;

     case 1 : 
      printf("MONDAY");
      break;

     case 2 : 
      printf("TUESDAY");
      break;

     case 3 : 
      printf("WEDNESDAY");
      break;
    
     case 4 : 
      printf("THURSDAY");
      break;

     case 5 : 
      printf("FRIDAY");
      break;

     case 6 : 
      printf("SATURDAY");
      break;

      default :
        printf("INVALID INPUT");
    
  }
  
  
}