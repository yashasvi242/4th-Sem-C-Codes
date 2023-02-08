#include <stdio.h>

int main(void) {

  int celcius;
  printf("enter temp in celcius : ");
  scanf("%d",&celcius);

  float fahrenheit;

  fahrenheit = ((1.8)*celcius) + 32;

  printf("conversion to fahrenheit : %f", fahrenheit);
  
  
  return 0;
}