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
The key point is that when assigning a negative number to an unsigned int, the number wraps around to a large positive value because unsigned int cannot represent negative numbers. Instead, the value is treated as if it were subtracted from 2^32, resulting in a large positive number.
*/
