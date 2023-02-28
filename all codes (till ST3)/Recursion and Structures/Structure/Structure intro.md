# Structure

Creating a structure 'student' and creating a object from the structure
used to store hetrogenous data.

```c
#include<stdio.h>



// create a structure, create obj from this structure, then enter value into its data members from main function, and print its value.

struct student{

    int rn;

    char name[20];

    char city[20];



    char branch[20];



};

int main(){

    // creating an instance of structure student

    struct student s;

    // access

    printf("enter roll no : ");

    scanf("%d", &s.rn);

    // printing

    printf("roll no is %d ", s.rn);



    return 0;



}
```

input :-

```cpp
enter roll no : 10
```

output :-

```cpp
roll no is 10
```

### Types of Strucutres

- simple structure
  
- array of structure
  
- pointer to structure
  
- nested structure
  

eg. 1

```c
#include<stdio.h>

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

    printf("\nGiven Roll no : %d", s.rn );
    printf("\nGiven Roll no : %s", s.name );
    
}

```

input - output

```c
enter roll no : 6
enter name : yashasvi

Given Roll no : 6
Given Roll no : yashasvi
```

---