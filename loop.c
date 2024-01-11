#include <stdio.h>

int main(){
	int A = 0, B = 0, i;
	for (i=1;i<=20;i++){
		A+=3;
		B+=7;
		if (i%5==0){
			printf("Iteration is %d :A is %d and B is %d\n",i,A,B);
		}
		else if (A%2!=0){
			printf("A is odd %d\n", A);
		}
		else if (B%2==0){
			printf("B is even %d\n", B);
		}
	}
	return 0;
}

