//Exercise 3, Create two pointers to two numbers and swap them


#include <stdio.h>

int main(void) {
	int num1 = 5, num2 = 8;
	int *ptr1, *ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("Before swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

	// Directly swap the pointers are pointing to same addresses but values in those addresses are swapped.
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("After swapping: num1 = %d, num2 = %d\n a:%d, b: %d\n", *ptr1, *ptr2, num1, num2);

	return 0;
}

