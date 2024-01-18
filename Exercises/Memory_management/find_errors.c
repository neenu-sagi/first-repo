//Find the errors in the code below. Could you explain your answer? Determine where the variables are allocated (Heap vs Stack).

void print_sky_team(void)
{
	char skyName[10];
	char* pTeamName = (char*) malloc(10);

	strcpy(skyName, "Sky UK");
	strcpy(pTeamName , "Home Comms SW Team"); 

	//print team name
	printf("%s: %s\n", skyName, pTeamName); 
}

/*ANSWER:
skyName-> local scope :stack
pTeamname-> pointer stored on the stack, but the memory it points to is allocated on the heap.
errors:
use of strcpy -> buffer overflow and undefined behaviour
not freeing memory

