#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int id;
	float height;
};

int main(void) {

	struct Student S1;
	//strlcpy is safer than strncpy and strncpy is safer than strcpy as strcpy is not safe
	//strlcpy(S1.name, "Sagi",sizeof(S1.name)); // couldn't make it to work 
	//strncpy(S1.name, "Sagi", sizeof(S1.name) - 1);
	snprintf(S1.name, sizeof(S1.name), "%s", "Sagi");
	S1.id = 25;
	S1.height = 175.5;

	// Print the values stored in the struct
	printf("Name: %s\n", S1.name);
	printf("ID: %d\n", S1.id);
	printf("Height: %.2f\n", S1.height);

	return 0;
}

