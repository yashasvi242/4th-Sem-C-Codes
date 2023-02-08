#include <stdio.h>

// take int,char,float,double as input from user and print them
int main(void) {

  int num;
  char ch;
  float fl;
  double db;

  printf("enter inputs in order (num,char,float,double) : ");
  scanf("%d %c %f %lf",&num, &ch, &fl, &db);
  
  printf("you enter %d, %c, %f, %lf \n", num,ch,fl,db);

  /*
    note : 
          size of int = 2,4
          size of char = 1 
          size of float = 4
          size of double = 8
    */

  return 0;
  
}