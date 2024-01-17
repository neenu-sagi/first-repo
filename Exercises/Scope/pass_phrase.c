//Write a program that pass a phrase to a function, and the function prints this phrase.

#include <stdio.h>

// Function to print phrase
void printPhrase(char *phrase) {
	printf("Printed Phrase: %s\n", phrase);
}

int main() {
	// Hardcoded phrase
	char String[] = "Hello, this is a hardcoded phrase!";

	// Pass the phrase to the function to print
	printPhrase(String);

	return 0;
}

