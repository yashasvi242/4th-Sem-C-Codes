#include <stdio.h>

/*
print pattern

n = 4

* * * * 
  * * * 
    * * 
      * 

  */
int main(void) {


  int n;
  printf("enter a number : ");
  scanf("%d",&n);

  for(int row = 0; row < n; row++){
    for(int col = n - row; col >= 1; col--){
      printf("%c ",'*');
    }
    printf("\n");
  }
  
  return 0;
}