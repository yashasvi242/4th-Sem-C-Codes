#include<stdio.h>

int main() {
    // declaration
    int arr[5];
    
    // inserting elements in array 
    for(int i = 0; i < 5; i++){
        int n;
        scanf("%d",&n);
        arr[i] = n;
    }
    
    // printing array 
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }
    

    
    
    return 0;
    
}