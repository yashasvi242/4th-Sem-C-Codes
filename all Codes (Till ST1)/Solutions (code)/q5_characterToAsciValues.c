#include <stdio.h>

// take 2 characters as input from user and then print their asci values

int main(void) {

  char ch1, ch2;

  printf("enter 2 characters (space separated) : ");
  scanf("%c %c", &ch1, &ch2);


  printf("asci value of ch1 : %d \n", ch1);
  printf("asci value of ch2 : %d", ch2);
  
  
  #include <stdio.h>

  
// lets now character array to its asci values

  char ch[6] = {'a', 'b', 'c', 'A', 'B', 'C'};

  int arr[6];

  // M-1 : print character using int domain specifier
  printf("\n ");
  for(int i = 0; i < 6; i++){
    arr[i] = ch[i];
    printf("%d ", ch[i]);
  } 

  // M-2 : save the character into array of type int
  printf("\n");
  for(int i = 0; i < 6; i++){
    printf("%d ", arr[i]);
  } 
  
  return 0;
}