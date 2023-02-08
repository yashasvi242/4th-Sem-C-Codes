#include <stdio.h>

// take input as user's age and then tell if he/she is a teen, adult or old person (using if else)

int main(void) {

  int age;

  printf("enter ur age : ");
  scanf("%d",&age);

  if(age < 18) printf("you are a teen \n");
  else if(age >= 18 && age < 50) printf("you are an adult \n");
  else printf("you are an old person \n");

  
  return 0;
}