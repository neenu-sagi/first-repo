//What is the output of the code below? Could you explain your answer?

#include <stdio.h> 

int main(void)
{
	int i;
	for( i = 0; i < 10; i++ )
	{
		int j = 0;
		for( j = 10; j > 0; j-- )
		{
			if( i > j )
			{
				printf("Variable i (%d) is bigger than j (%d) \n", i, j);
				break;
			}
		}
	}

	/* print result */
	printf("Last values: i (%d), j (%d) \n", i, j);

	return 0;
}

/*Answer:
  compilation error: j undeclared, j's scope is inside the forloop
  find_output.c: In function ‘main’:
  find_output.c:22:46: error: ‘j’ undeclared (first use in this function)
  printf("Last values: i (%d), j (%d) \n", i, j);
  ^
  find_output.c:22:46: note: each undeclared identifier is reported only once for each function it appears in

*/
