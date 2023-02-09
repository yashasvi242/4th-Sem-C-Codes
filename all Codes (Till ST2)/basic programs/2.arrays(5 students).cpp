#include<stdio.h>

// take input of 5 students with 5 marks 

void input(int student[], int n){
    
    //printf("enter all marks for a student%d",n);
    for(int i = 0; i < 5; i++){
        scanf("%d",&student[i]);
    }
    printf("\n");
}

int sumOfArray(int student[]){
    int sum = 0;
    for(int i =0 ; i < 5; i++){
        sum += student[i];
    }
    
    return sum;
    
}

void printArray(int student[]){
    for(int i =0; i < 5; i++) printf("%d ",student[i]);
    printf("\n");
    
}

int main(){
    
    int student1[5];    
    int student2[5];
    int student3[5];
    int student4[5];
    int student5[5];
    
    // input;
    input(student1,1);    
    input(student2,2);
    input(student3,3);
    input(student4,4);
    input(student5,5);

    // printArray(student1);    
    // printArray(student2);
    // printArray(student3);
    // printArray(student4);
    // printArray(student5);
    
    int sumOfStudent1 = sumOfArray(student1);    
    int sumOfStudent2 = sumOfArray(student2);
    int sumOfStudent3 = sumOfArray(student3);
    int sumOfStudent4 = sumOfArray(student4);
    int sumOfStudent5 = sumOfArray(student5);
    
    printf("%d\n",sumOfStudent1);    
    printf("%d\n",sumOfStudent2);
    printf("%d\n",sumOfStudent3);
    printf("%d\n",sumOfStudent4);
    printf("%d\n",sumOfStudent5);

    
    //puts("student who topped : ");
    
    
    


    
    




}