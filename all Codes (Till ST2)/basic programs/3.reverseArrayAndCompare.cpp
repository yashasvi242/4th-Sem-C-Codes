
#include<stdio.h>
// given 2 arrays, reverse arr1 and then compare if arr1 and arr2 are equal or not 

int main() {
    int arr1[6] = {10,20,30,40,50,60};    
    int arr2[6] = {60,50,40,30,20,10};
    
    // lets reverse array 1 
    int i = 0;
    int j = 5;
    while(i < j){
        int temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;
        i++;
        j--;
    }
    
    // lets check if the arr1 and arr2 are equal or not
    for(int i = 0; i < 6; i++){
        if(arr1[i] != arr2[i]){
            puts("arr1 and arr2 are NOT EQUAL");
            return 0;
        }
    }

    puts("arr1 and arr2 are EQUAL");
    return 0;
    

}