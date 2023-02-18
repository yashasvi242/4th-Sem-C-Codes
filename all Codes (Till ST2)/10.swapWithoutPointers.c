
#include <stdio.h>

// swap 2 integers , without pointers

int main()
{
    int num1 = 10;
    int num2 = 20;
    
    puts("before swaping :- ");
    printf("num1 : %d, num2 : %d\n ", num1,num2);
    
    // swaping without pointers
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    puts("after swaping :-");
    printf("num1 : %d, num2 : %d", num1,num2);
    
    
    
    return 0;
}
