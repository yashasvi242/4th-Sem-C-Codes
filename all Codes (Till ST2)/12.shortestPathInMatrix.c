/* ✔️Question :- Shortest path from src to destination in a binary matrix 

    You need to take input as rowSize, colSize, and then create a matrix of this size, then take input from user and then fill the matrix
    then you will be given a coordinates(destiRow, destiCol) , return the shortest path to reach destination from (0,0)

*/

// solved using recursion

#include<stdio.h>
#include<stdbool.h>

int globalRowSize;
int globalColSize;
int destiRow;
int destiCol;

// isSafeToMove
bool isSafeToMove(int matrix[][globalColSize], bool visited[][globalColSize], int currRow, int currCol){

    /* all below conditions should be met to return true
            cond.1 : matrix[currRow][currCol] should be equal to 1
            cond.2 : visited[currRow][currCol] should be false
            cond.3 : currRow, currCol should be in range of the matrix
    */
    if(matrix[currRow][currCol] == 0 || visited[currRow][currCol] || (currRow < 0 || currRow >= globalRowSize) || (currCol < 0 || currCol >= globalColSize) )
        return false;
    return true;
}

// solve()
void solve(int matrix[][globalColSize] , bool visited[][globalColSize], int *ansPtr, int currSteps, int currRow, int currCol){
   
    // base case - when reached the destination,update the ans and return from here
    if(currRow == destiRow && currCol == destiCol){
        if(currSteps < *ansPtr)
            *ansPtr = currSteps;
        return;
    }

    // visiting curr node 
    visited[currRow][currCol] = true;

    // left move
    int newRow = currRow, newCol = currCol-1;
    if(isSafeToMove(matrix, visited, newRow, newCol)){
        solve(matrix, visited, ansPtr, currSteps + 1, newRow, newCol);
    }

    // right move
    newRow = currRow, newCol = currCol+1;
    if(isSafeToMove(matrix, visited,newRow, newCol)){
        solve(matrix, visited, ansPtr, currSteps + 1, newRow, newCol);
    }

    // up move
    newRow = currRow - 1, newCol = currCol;
    if(isSafeToMove(matrix, visited, newRow, newCol)){
        solve(matrix, visited, ansPtr, currSteps + 1, newRow, newCol);
    }

    // down move
    newRow = currRow + 1, newCol = currCol;
    if(isSafeToMove(matrix, visited, newRow, newCol)){
        solve(matrix, visited, ansPtr, currSteps + 1, newRow, newCol);
    }

    // ones all the moves for a particular coordinates are explored, then unvisit the curr node
    visited[currRow][currCol] = false;
}


// main function
int main(){

    puts("---------------------------------------");

    int rowSize,colSize;

    // taking matrix size as input 
    printf("enter rowSize & colSize : ");
    scanf("%d %d",&rowSize, &colSize);

    // taking destination as input 
    printf("enter destination coordinates : ");
    scanf("%d %d", &destiRow, &destiCol);

    // setting row,col sizes globally 
    globalColSize = colSize;
    globalRowSize = rowSize;

    int matrix[rowSize][colSize];

    // enter matrix values 
    puts("enter matrix values : ");
    for(int i = 0; i < rowSize; i++){
        for(int j=0; j < colSize; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // we need to maintain 'visited[][] nodes'  - initially all the nodes should be unvisited
    bool visited[rowSize][colSize];
    for(int i = 0; i < rowSize; i++){
        for(int j=0; j < colSize; j++){
            visited[i][j] = false;
        }
    }

    int currSteps = 0;
    int ans = 9999;

    int currRow = 0, currCol = 0;
    solve(matrix, visited, &ans, currSteps, currRow, currCol);

    if(ans == 9999) puts("no path found.");
    else printf("min steps to reach destination : %d\n", ans);
    
    puts("---------------------------------------");
    
    return 0;

/* 
    Test Case 1 (☑️) 
        row size = 3, col size = 4
        1 1 1 1 
        0 0 0 1 
        0 0 0 1
        src = (0,0) desti = (0,3)
        Output = 3 

    Test Case 2 (☑️)
        row size = 3, col size = 4
        1 1 1 1 
        1 1 0 0
        1 1 1 1 
        src = (0,0) desti = (2,3)
        Output = 5 
        
    Test Case 3 (☑️)
        row size = 3, col size = 4
        1 1 1 1 
        0 0 0 0
        1 1 1 1 
        src = (0,0) desti = (2,3)
        Output = no path 
*/

    
}