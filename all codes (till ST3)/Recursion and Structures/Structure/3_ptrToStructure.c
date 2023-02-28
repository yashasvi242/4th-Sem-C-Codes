#include<stdio.h>

//✔️

struct student{

    int rn;
    char name[20];
};

int main(){

    struct student s;
    struct student* sPtr = &s; // creating pointer to structure 'student'

    printf("enter roll no : ");
    scanf("%d", &(sPtr->rn));
    
    printf("enter name : ");
    scanf("%s", &(sPtr->name));    

    puts("------Output-------");
    printf("\nGiven Roll no : %d", sPtr -> rn );
    printf("\nGiven Roll no : %s", sPtr -> name );
    
}