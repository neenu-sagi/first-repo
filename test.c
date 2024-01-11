#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_string[50];
    unsigned long result;

    // Prompt the user to enter a string
    printf("Enter a string representing an unsigned long integer: ");
    scanf("%s", input_string);

    // Convert the string to an unsigned long integer
    result = strtoul(input_string, NULL, 10);

    // Display the result
    printf("Converted value: %lu\n", result);

    return 0;
}

