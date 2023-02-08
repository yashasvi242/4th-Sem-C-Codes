#include <stdio.h>

// print outputs using switch case
// when number is between 0 to 2 , print : you entered 'num'
// when number is more then 2 print, you entered 'num' more then 2

int main(void) {

  int num;
  printf("enter a number : ");
  scanf("%d",&num);

  switch(num){

    case 0 :
      printf("you entered 0 \n");
      break;

    case 1 : 
      printf("you entered 1 \n");
      break;
    
    case 2 : 
      printf("you entered 2 \n");
      break;

    default :
      printf("you entered a number greater then 2");
    
  }
  
}