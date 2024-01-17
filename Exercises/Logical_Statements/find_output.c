//What is the output of the code below? Could you explain your answer?
#include <stdio.h>

int main(void)
{
	unsigned int    A = -10;
	int             B = 5;
	unsigned int    C = 100;

	if(A > B)
	{
		printf("A > B\n");
	}
	else
	{
		printf("B > A\n");        
	}


	if(A > C)
	{
		printf("A > C\n");
	}
	else
	{
		printf("C > A\n");        
	}


	if(B > C)
	{
		printf("B > C\n");
	}
	else
	{
		printf("C > B\n");        
	}

	return 0;
	}


/* Answer:
A= -10, (2's complement rep of signed 32 bit 11111111111111111111111111110110, when considered as signed it becomes very large positive number)
A > B
A > C
C > B
*/
