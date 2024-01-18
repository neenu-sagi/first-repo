#include <stdio.h>
#include "lib.h"

int main() {
	double num = 6;

	double result_square = square(num);
	printf("Square of %f: %f\n", num, result_square);

	double result_cube = cube(num);
	printf("Cube of %f: %f\n", num, result_cube);

	return 0;
}

