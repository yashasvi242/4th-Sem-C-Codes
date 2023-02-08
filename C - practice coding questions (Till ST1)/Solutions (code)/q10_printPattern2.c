#include <stdio.h>

/* print pattern given below 

n = 4

1 
2 3
4 5 6 
7 8 9 10

*/

int main(void) {

  int n;
  printf("enter a number : ");
  scanf("%d",&n);

  int number = 1;
  for(int row = 0; row < n; row++){
    for(int col = 1; col <= row+1; col++){
      printf("%d ", number);
      number++;
    }
    printf("\n");
  }
  
  return 0;
}