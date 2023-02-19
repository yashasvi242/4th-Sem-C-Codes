#include<stdio.h>
// Q5- will this code throw any error ? 

int main(){
	float *p1 ,i = 25.50;
	char *p2;
	p1 = &i;
	p2 = &i;
 
	printf("%p\n",p1);
	printf("%p\n",p2);
	return 0;
}

// Output : ERROR (a pointer to character can not point to a float)