//understanding bit feilds
#include <stdio.h>

typedef struct {
	int type : 6;
	int priority : 3;
	int ID : 7;
}Prot;


int main (void){
	Prot p = {31, 3, 63};
	printf("Type=%d Priority=%d ID=%d\n", p.type, p.priority, p.ID);
	return 0;
}

