//Exercise 1, In a void function, add two values and then print that value in main

#include <stdio.h>
void add (int a , int b, int * res_ptr){
	*res_ptr = a+b;
}

int main(void){
	int result;
	add(1,6, &result);
	printf("Sum is %d\n", result);
	return 0;
}

