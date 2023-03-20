#include <stdio.h>

// sort an array (using bubble sort)

int main(){
    int arr[7] = {10,9,8,7,6,5,4};
    int size = sizeof(arr)/sizeof(int);
    
    for(int rounds=1; rounds <= size-1; rounds++){
        for(int j=0; j <= size-rounds-1; j++){
            
            // swap
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    
    // printing array (final)
    for(int i=0; i < size; i++){
        printf("%d ",arr[i]);
    }
    
    // output : 4 5 6 7 8 9 10 
    
}
