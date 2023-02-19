#include<stdio.h>
//Q4
void fun(int **);
int main(){
    int *j;
    fun(&j);

    printf("address of a : %p\n", j);
    return 0;
}

void fun(int **k){
    int a = 10;
    printf("address of a : %p\n", &a);
    /* add statement below such that address of a gets stored in j*/
    *k = &a;

}

/* output : 
address of a : 0x7ffe44b86e14
address of a : 0x7ffe44b86e14
*/