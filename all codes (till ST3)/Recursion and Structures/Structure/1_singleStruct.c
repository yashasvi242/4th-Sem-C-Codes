#include<stdio.h>

//✔️
struct student{

    int rn;
    char name[20];
};

int main(){

    struct student s;
    
    printf("enter roll no : ");
    scanf("%d", &s.rn);
    
    printf("enter name : ");
    scanf("%s", &s.name);    

    puts("--------Output--------");

    printf("\nMyself %d, roll no %s", s.name ,s.rn );
    
}




