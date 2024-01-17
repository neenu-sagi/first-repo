//Write a program that call a function 10 times, each time this function must display a counter of how many times it was already used.

#include <stdio.h>

// Function that displays the count of how many times function was already used before
void counter_Func(int count) {
	printf("Number of times function was already used: %d\n", count-1);
}

int main() {
	// Call the function 10 times
	for (int i = 1; i <= 10; ++i) {
		counter_Func(i);
	}

	return 0;
}

