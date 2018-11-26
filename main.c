#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "describe.h"

int main() {
	speak();
	int a = 10;
	int b = 20;

	swap(&a, &b, sizeof(int));
	printf("a is %d and b is %d\n", a, b);
	int pint = 12;
	add(&pint);
	printf("pint is now %d\n", pint);
   	return 0;
}

