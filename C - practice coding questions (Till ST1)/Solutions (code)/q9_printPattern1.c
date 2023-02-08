#include <stdio.h>

/* print the below pattern

n = 4

A
A B 
A B C 
A B C D

*/

int main(void) {

  int n;
  printf("enter a number : ");
  scanf("%d",&n);

  for(int row = 0; row < n; row++){
    char ch = 'A';
    for(int col = 1; col <= row + 1; col++){
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }
  
  return 0;
}