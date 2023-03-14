#include <stdio.h>

/* n = 5 

*
**
***
****
*****
****
***
**
*

*/

int main()
{
    // input 
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    
    // part 1 triangle 
    for(int i=0; i <= n-1; i++){
        for(int j=1; j<=i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    // part 2 triangle 
    for(int i=0; i<= n-2; i++){
        for(int j=1; j <= n-i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    
}
