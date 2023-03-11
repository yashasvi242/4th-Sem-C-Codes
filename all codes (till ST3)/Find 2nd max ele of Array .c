#include <stdio.h>

// program to find 2nd max element in array 

int main()
{
    
    int arr[] = {5,6,7,1,8,2};
    int size = sizeof(arr)/sizeof(int);
    
    // first find the max element 
    int maxEle = -99999;
    for(int i=0; i < size; i++)
        if(arr[i] > maxEle)
            maxEle = arr[i];
            
    // now find the 2ndMaxEle, using maxEle
    int secMaxEle = -99999;
    for(int i=0; i < size; i++)
        if(arr[i] > secMaxEle && arr[i] < maxEle)
            secMaxEle = arr[i];
             
    printf("2nd Max ele of array : %d \n ", secMaxEle);
             
    /* 
        Expected Output : 7
    */
    
}
