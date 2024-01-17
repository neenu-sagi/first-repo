//Exercise 2, Create a function which takes two pointers to integers and swaps the values they are pointing to, without changing the original memory of the two integers

#include <stdio.h>

void swap (int **a, int **b){
	int *temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main (){
	int a=5, b=8, *c, *d;
	c=&a;
	d=&b;
	printf ("values are: a = %d and b = %d\n", *c, *d);
	swap (&c,&d);
	printf ("swapped values are: a = %d and b = %d\n", *c, *d);
	return 0;
}

