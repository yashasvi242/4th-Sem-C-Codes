#include <stdio.h>

// Que - 3 : swap 2 numbers - call by reference 

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    
    printf("Before :- a -> %d, b -> %d\n",a,b);
    swap(&a,&b);
    printf("After :- a -> %d, b -> %d\n",a,b);

}
