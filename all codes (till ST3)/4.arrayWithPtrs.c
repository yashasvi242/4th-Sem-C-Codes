
#include <stdio.h>

// guess output of the code

int main()
{
    int a[] = {10,20,30,40,50};
    
    int i;
    for(i = 0; i < 5; i++){
        printf("%d ",((*a)++)+1 );
    }
    
}



// output : 11 12 13 14 15 
