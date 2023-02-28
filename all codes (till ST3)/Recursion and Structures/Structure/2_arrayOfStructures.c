#include<stdio.h>

//✔️

struct student{

    int rn;
    char name[20];
};

int main(){

    // 3 objects created
    struct student sObj[3];
    
    int i=3;
    printf("enter data for %d students :- \n", i );
    for(int i=0; i < 3; i++){
        printf("enter roll no : "); 
        scanf("%d",&(sObj[i].rn));
        printf("enter name : ");
        scanf("%s", &(sObj[i].name));    
    }
    
    
    // printing 
    puts("-------Output---------"); 
    for(int i=0; i < 3; i++){
        printf("\nGiven Roll no : %d", sObj[i].rn );
        printf("\nGiven Roll no : %s", sObj[i].name );
    }
}






