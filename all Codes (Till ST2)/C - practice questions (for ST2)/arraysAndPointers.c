#include<stdio.h>
#include<stdbool.h>

// conclusion :- we dont need to pass an array with reference or by address, because by default in C/C++ arrays are already accessed by addresses

void makeChanges(int matrix[][3]){
    matrix[2][2] = -99;
}

int main(){

    int matrix[3][3] = {{1,2,3},{3,4,5},{10,11,12}};

    puts("before changes : ");
    for(int i = 0; i < 3; i++){
        for(int j=0; j < 3; j++)
            printf("%d ",matrix[i][j]);
        puts(" ");
    }

    makeChanges(matrix);

    puts("after changes : ");
    for(int i = 0; i < 3; i++){
        for(int j=0; j < 3; j++)
            printf("%d ",matrix[i][j]);
        puts(" ");
    }

}