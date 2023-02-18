
#include <stdio.h>

// create variable i, and a pointer 'j'pointing  to i, and a pointer to pointer k pointing to j
// then print the address of i, using i,j,k (output address must be same)


int main()
{
    
    // i is a variable, j is a pointer to var i, and k is a pointer to the  pointer j
    int i = 1,*j = &i, **k = &j; 
    
    // below 3 lines will have same address.
    printf("address of i (using i): %p \n", &i);  // i ka address print kardo
    printf("address of i (using j) : %p \n", j ); // j ki value print kardo
    printf("address of i (using k) : %p \n", *k);  // k ki value (which is a address of j) uski value print kardo
    
    
    
    return 0;
}



