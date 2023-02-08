#include<stdio.h>

// write a program to convert days into years,week,days
//(ignore leap year)

int main(){
  
  int days;
  printf("enter number of days : ");
  scanf("%d",&days);

  int years,weeks,remaining_days;

  years = days/365;  // calculated years

  days -= 365; 

  weeks = days/7;  // calculated weeks

  days -= 7*(weeks);

  remaining_days = days; //calculated days

  printf("%d years, %d weeks, %d days\n ", years, weeks, days );

  return 0;

  

  
  

  
}
