#include<stdio.h>

//✔️

struct student{

    int roll;
    char name[20];
    
    struct address{
        int houseNo;
        char city[20];

    }a; // this nested class's object name is 'a' here

};

int main(){

    struct student s;

    printf("enter house no : ");
    scanf("%d",&s.a.houseNo);
    printf("enter city name : ");
    scanf("%s",&s.a.city);

    puts("--------Output---------");
    printf("house number is %d in %s\n", s.a.houseNo, s.a.city);
    

}