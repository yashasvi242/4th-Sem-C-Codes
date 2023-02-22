
#include <stdio.h>

// given n as input, find the factorial of a n and using ptr and functions, and then store it into n

void factorial(int *n){
    
    int ans = 1;
    for(int i=1; i <= *n; i++){
        ans *= i;
    }
    
    *n = ans;
    
}

int main()
{
    int n = 5;
    factorial(&n);
    
    printf("%d", n);
    
    
    
}
