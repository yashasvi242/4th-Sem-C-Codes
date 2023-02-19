#include<stdio.h>

//Q8

int main(){
    
    int a,*b,**c,***d,****e;
    a = 10;
    b = &a;
    c = &b;
    d = &c;
    e = &d;

    printf("a = %d b = %u c = %u d = %u e = %u",a,b,c,d,e);
    printf("%d %d %d\n", a, a + *b, **c + ***d +, ****e);
    return 0;
}

// error in line 12