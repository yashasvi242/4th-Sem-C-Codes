/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdbool.h>

/*✔️ Do a in-place reversal of  a matrix i.e using no extra space.

input :-
1 2 3 
4 5 6 
7 8 9

output:-
9 8 7 
6 5 4 
3 2 1 

*/


int main()
{
    int rowSize = 3, colSize = 3;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    // print 
    printf("original matrix : \n");
    for(int i=0; i<rowSize; i++){
        for(int j=0; j < colSize; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // reversal - (make sure to run loop for only half of the matrix, otherwise it will be revered twise)
    bool isRevered = false;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j < colSize; j++){
            
            //imp cond - when to stop this reversal procedure  - if we do not put this condition, then the matrix will be revered twise i.e it will be in the same state as input
            if(i >= rowSize-i-1 && j >= colSize-j-1){
                isRevered = true;
                break;
            }
            
            int temp = matrix[i][j];
            matrix[i][j] = matrix[rowSize-i-1][colSize-j-1];
            matrix[rowSize-i-1][colSize-j-1] = temp;
        }
        
        if(isRevered) break;
    }
    
    // printing the reversed matrix
    printf("after reversing the matrix : \n");
    for(int i=0; i<rowSize; i++){
        for(int j=0; j < colSize; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}



