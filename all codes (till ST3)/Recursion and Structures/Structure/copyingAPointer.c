#include<stdio.h>

//✔️ - passing whole object into function using pointers (note : here new copy of object will not be created, rather only its address is passed, so changes will take place in original object itself)
struct student{

    int rn;
    char name[20];
};

// fun
void displayDetails(struct student* sPtr){

    printf("\nDisplaying name : %s",sPtr -> name);
    printf("\nDisplaying roll : %d",sPtr -> rn);

}


int main(){

    struct student s;
    
    // setting values 
    s.rn = 10;

    puts("--------Output--------");

    struct student s2 = s;  // now all the datamemebers and their values are copied to object 's2'
    
    printf("\nDisplaying roll : %d",s2.rn);
    
}

