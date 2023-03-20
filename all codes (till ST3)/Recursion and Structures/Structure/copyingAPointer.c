#include<stdio.h>

//✔️ - here new copy student 's2' of student 's' is created and all the datamembers and values of s will be copied in s2 also.

struct student{

    int rn;
    char name[20];
};

int main(){

    struct student s;
    
    // setting values 
    s.rn = 10;

    puts("--------Output--------");

    struct student s2 = s;  // now all the datamemebers and their values are copied to object 's2'
    
    printf("\nDisplaying roll : %d",s2.rn);
    
}

