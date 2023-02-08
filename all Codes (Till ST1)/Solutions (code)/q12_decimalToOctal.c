#include<stdio.h>
#include<stdlib.h>

// convert decimal to octal 

int main(void) {
  
  int decimal;
  char octalString[100]; // here we will store our output
  
  printf("Enter a decimal number: ");
  scanf("%d", &decimal);

  // use library funtion sprintf()
  sprintf(octalString, "%o", decimal);    // %o is format specifier for octal 
  
  printf("Octal equivalent: %s\n", octalString);
  return 0;
  
  
  
  return 0;
}