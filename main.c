#import<stdio.h>
#import<stdlib.h>
#include<string.h>
#import "describe.h"

int main() {
	speak();
	int a = 10;
	int b = 20;

	swap(&a, &b, sizeof(int));
	printf("a is %d and b is %d\n", a, b);
   	return 0;
}

