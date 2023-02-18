
#include <stdio.h>

// swap 2 inteegers (using pointers)

void swap(int* n1, int* n2){
    
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
}

int main()
{
    // create 2 integers and also a swap function to swap 2 values
    int num1 = 10;
    int num2 = 20;
    
    puts("before swaping :- ");
    printf("num1 : %d, num2 : %d\n" , num1,num2);
    
    swap(&num1,&num2);
    
    puts("after swaping :- ");
    printf("num1 : %d, num2 : %d  " , num1,num2);
    
    
    return 0;
}
