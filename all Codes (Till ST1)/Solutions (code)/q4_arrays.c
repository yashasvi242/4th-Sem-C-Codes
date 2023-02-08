#include <stdio.h>

// creating an array and printing its size and values


int main() {

  int arr[] = {10,20,30,40};

  int size = sizeof(arr)/sizeof(arr[0]);
  
  printf("size of array is : %d\n", size);

  printf("elements of array1 : ");
  for(int i = 0; i < size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");

  // creating a char array
  char arr2[] = {'a','b','c','d'};
  int size2 = sizeof(arr2)/sizeof(arr2[0]);

  // print character array  
  printf("elements of array 2 : ");
  for(int i = 0; i < size; i++) printf("%c ",arr2[i]);
  
  
  return 0;
}