/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>

// create a matrix by taking input, then print it, and search for a key.

int main()
{
    int rowSize = 4;
    int colSize = 4;
     
    int matrix[rowSize][colSize];
    
    //input 
    for(int i = 0; i <rowSize; i++){
        printf("enter row elements : ");
        for(int j = 0; j < colSize; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // print
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    puts("----------");
    
    // search for 'key' (return row and col index)
    int key = 11 ;// expected ans : row : 3, col = 3
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            if(matrix[i][j] == key){
                printf("key is present at row : %d, col : %d", i+1,j+1);
                return 0;
            }
        }
    }
    puts("key not found.");
    return 0;
    
}

