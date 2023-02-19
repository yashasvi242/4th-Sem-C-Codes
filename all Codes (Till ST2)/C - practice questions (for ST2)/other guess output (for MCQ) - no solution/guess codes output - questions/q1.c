#include <stdio.h>

int main() {
	printf("%d%d\n", sizeof(NULL), sizeof(""));
	return 0;
}







// output : 81 (8 for nullptr, 1 for empty string)