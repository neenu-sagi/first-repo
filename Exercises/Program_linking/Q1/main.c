// main.c
#include <stdio.h>

// Function prototype
int calc(int x);

int main() {
	int value = 5;

	// Call the function
	printf("Result = for %d: %d\n",value, calc(value));

	return 0;
}

