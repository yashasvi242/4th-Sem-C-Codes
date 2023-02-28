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
    
    // we can not assign a string's value to an object inside main function.
    
    /*  
    s.name = "Yashasvi";
    s.rn = 10;
    */

    puts("--------Output--------");

    displayDetails(&s);
    
    printf("\nDisplaying name : %s",s.name);
    printf("\nDisplaying roll : %d",s.rn);
    
}

