#include <stdio.h>

int main(){
	char s[10];
	unsigned long result = 0;
	printf("Enter a string:\n");
	scanf("%s",s);
	
	char *str = s;
	while (*str != '\0') {
		// Check if the character is a digit
		if (*str >= '0' && *str <= '9') {
			// Update the result using the digit
			result = result * 10 + (*str - '0');
		} else {
			// Stop if a non-digit character is encountered
			break;
		}

		// Move to the next character
		str++;
	}
	printf("Converted value: %lu\n", result);
	return 0;
}
