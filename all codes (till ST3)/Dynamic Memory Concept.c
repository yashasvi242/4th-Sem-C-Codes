#include<stdio.h>
#include<stdlib.h>

int main(){
  /*
    - malloc()
    - calloc()
    - free()
    - realloc()
    
    // dynamic memory allocation - creating array of size 100

  */
  
    int *ptr = (int*)malloc(100*sizeof(int));  // dynamic allocation using malloc
    int *ptr1 = (int*)calloc(100,sizeof(int));   // dynamic allocation using calloc

    // in case of insufficient memory ptr will point to null.
    if(ptr == NULL) printf("Memory allocation failed..");
    else printf("Memory allocation successfull"); 
    
    // here is how u can assign values to our dynamically allocated array
    int *tempPtr = ptr;
    for(int i=0; i < 100; i++){
        *tempPtr = 10;
        tempPtr++;
    }


    // here how u have to print dynamic array
    tempPtr = ptr;
    for(int i=0; i<100; i++){
        printf("%d ",*tempPtr);
        tempPtr++;
    }


    // free up 100 bytes of dynamically allocated memory allocated to our array
    free(ptr);

    // reallocating - array with new memory size of 10 now
    ptr = realloc(ptr,10*sizeof(int));
}
